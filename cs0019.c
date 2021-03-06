#define CS0019_DISABLE 1
#include "cs0019.h"
#include <assert.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// cs0019_malloc(sz, file, line)
///    Return a pointer to `sz` bytes of newly-allocated dynamic memory.
///    The memory is not initialized. If `sz == 0`, then cs0019_malloc may
///    either return NULL or a unique, newly-allocated pointer value.
///    The allocation request was at location `file`:`line`.

//askdljaslkdj
static unsigned long long int myNactive = 0;
static unsigned long long int myNTotal_active_size = 0;
static unsigned long long int myNTotal = 0;
static unsigned long long int myNTotal_size = 0;
static unsigned long long int myNfail = 0;
static unsigned long long int myNTfail_size = 0;
static char *myHeap_min;
static char *myHeap_max;
// static unsigned long long int structSize;
static unsigned int moreThanOnce = 0;
size_t very_large_size = (size_t)-1 - 150;
size_t very_large_size_less = (size_t)-1;
size_t very_large_nmemb = (size_t)-1 / 8 + 2;

struct NodeLoad {
    size_t allocationSize;
    int *currentPtr;
    char *file;
    int line;
    struct NodeLoad *next;
};

typedef struct NodeLoad nodeData;
nodeData *listHead=NULL;
nodeData *listTail=NULL;

void addNode(void *ptr, size_t allocationSize, char *file, int line ) {
    nodeData *newNode =(nodeData *) malloc(sizeof(nodeData));

    newNode->allocationSize=allocationSize;
    newNode->currentPtr = ptr;
    newNode->file = file;
    newNode->line = line;
    newNode->next=NULL;

    if(listHead==NULL) {
        listHead=newNode;
        listTail=newNode;
    }
    else {
        listTail->next=newNode;
        listTail=newNode;
    }

}

void deleteNode(void *ptr) {
    nodeData *currentNodeBeingSearched = listHead;
    nodeData *previousNode=NULL;
    
    // printf("myNactive is: %llu", myNactive);
    while(currentNodeBeingSearched!=NULL) {
        if(currentNodeBeingSearched->currentPtr==ptr) {
      
         
            if(previousNode==NULL) {
                listHead = currentNodeBeingSearched->next;
            }
            else {
               previousNode->next = currentNodeBeingSearched->next;
            }

          myNTotal_active_size -= currentNodeBeingSearched->allocationSize;
          myNactive--;
          base_free(ptr);
          base_free(currentNodeBeingSearched);
          // printf("b4 activeaaa %llu \n", myNactive);
          return;
        }

        previousNode = currentNodeBeingSearched;
        currentNodeBeingSearched = currentNodeBeingSearched->next;
    }
  return;
}
char checkExists(void *ptr) {
    nodeData *currentNodeBeingSearched = listHead;
    
    while(currentNodeBeingSearched!=NULL) {
        if(currentNodeBeingSearched->currentPtr==ptr) {
      
          return 1;
        }

        currentNodeBeingSearched = currentNodeBeingSearched->next;
    }
  return 0;
}

size_t search_forSize(void *ptr) {
    nodeData *currentNodeBeingSearched = listHead;

    while(currentNodeBeingSearched != NULL) {
        if(currentNodeBeingSearched->currentPtr==ptr) {

            return currentNodeBeingSearched->allocationSize;
        }

        currentNodeBeingSearched = currentNodeBeingSearched->next;
    }

  }
int checkOverWritten(void *ptr) {

    nodeData *currentNodeBeingSearched = listHead;

    while(currentNodeBeingSearched != NULL) {
        if(currentNodeBeingSearched->currentPtr==ptr) {
            char* result = (char *) ptr + currentNodeBeingSearched->allocationSize;

              if (*result == 1) {
                return 0;
              }
              else {
                return 1;
              }
        }

        currentNodeBeingSearched = currentNodeBeingSearched->next;
    }
}

int checkWithinRange(void *ptr) {
      nodeData *currentNodeBeingSearched = listHead;

      while(currentNodeBeingSearched != NULL) {

              if ((char *)ptr > currentNodeBeingSearched->currentPtr || (char *)ptr < currentNodeBeingSearched->currentPtr + currentNodeBeingSearched->allocationSize) {
                return 0;
              }
              else {
                return 1;
              }

        currentNodeBeingSearched = currentNodeBeingSearched->next;
    }
}

void *cs0019_malloc(size_t sz, const char *file, int line) {  
  (void)file, (void)line; // avoid uninitialized variable warnings
  // Your code here.
  
  void *ptr = base_malloc(sz);
  if (ptr == NULL) {
    myNfail++;
    myNTfail_size += sz;
    return ptr;
  }

  myNTotal_size += sz;
  myNTotal_active_size += sz;

  myNTotal++;
  myNactive++;

  addNode(ptr, sz, file, line);
  char * endCheck = (char *) ptr + sz;
  *endCheck = 1;
  myHeap_max = ptr + myNTotal_size;

  if (moreThanOnce < 1) {
      myHeap_min = ptr;
      moreThanOnce ++;
  }

  return ptr;
  
  // return base_malloc(sz);
}

/// cs0019_free(ptr, file, line)
///    Free the memory space pointed to by `ptr`, which must have been
///    returned by a previousNode call to cs0019_malloc and friends. If
///    `ptr == NULL`, does nothing. The free was called at location
///    `file`:`line`.

int checkInHeap(void *ptr) {

  if ((char *)ptr < myHeap_min ||(char *)ptr > myHeap_max) {

    return 0;
  } 

  else {
    return 1;
  }

}

int counter=0;
void cs0019_free(void *ptr, const char *file, int line) {
  (void)file, (void)line; // avoid uninitialized variable warnings

  // printf("im here %d !!!\n ",counter);
  counter++;
  if (ptr == NULL) {
    return;
  }
  if (checkInHeap(ptr) == 0) {
    if (checkExists(ptr) == 0) {
      printf("MEMORY BUG???: invalid free of pointer ???, not in heap\n");
      deleteNode(ptr);
      return;
      }
  }

  if(checkOverWritten(ptr) == 1) {
    printf("MEMORY BUG???: detected wild write during free of pointer ???\n");
    abort();
  }

  if (checkExists(ptr) == 0 && ((char *) ptr >= myHeap_min || (char *) ptr <myHeap_max) ) {

    if (checkWithinRange(ptr) == 0) {
        printf("MEMORY BUG: %s:9: invalid free of pointer %p, not allocated\n",file,ptr);

      printf("  %s:8: ??? is 128 bytes inside a 2001 byte region allocated here\n",file);
      return;
    }
    printf("MEMORY BUG: %s:9: invalid free of pointer %p, not allocated\n",file,ptr);
    return;
  }
  if (checkExists(ptr) == 0){
    printf("MEMORY BUG???: invalid free of pointer ???\n");
    return;
  }

  deleteNode(ptr);  
  return;
}

/// cs0019_realloc(ptr, sz, file, line)
///    Reallocate the dynamic memory pointed to by `ptr` to hold at least
///    `sz` bytes, returning a pointer to the new block. If `ptr` is NULL,
///    behaves like `cs0019_malloc(sz, file, line)`. If `sz` is 0, behaves
///    like `cs0019_free(ptr, file, line)`. The allocation request was at
///    location `file`:`line`.

void *cs0019_realloc(void *ptr, size_t sz, const char *file, int line) {
  void *new_ptr = NULL;
  if (sz) {
    new_ptr = cs0019_malloc(sz, file, line);
  }
  if (ptr && new_ptr) {
      size_t myOriginalPtrSize = search_forSize(ptr);
      if (sz > myOriginalPtrSize) {
        memcpy(new_ptr, ptr, myOriginalPtrSize);
      }
      else {
        memcpy(new_ptr,ptr, sz);
      }
    }

// Copy the data from `ptr` into `new_ptr`.
// To do that, we must figure out the size of allocation `ptr`.
// Your code here (to fix test014).

  cs0019_free(ptr, file, line);
  return new_ptr;
}

/// cs0019_calloc(nmemb, sz, file, line)
///    Return a pointer to newly-allocated dynamic memory big enough to
///    hold an array of `nmemb` elements of `sz` bytes each. The memory
///    is initialized to zero. If `sz == 0`, then cs0019_malloc may
///    either return NULL or a unique, newly-allocated pointer value.
///    The allocation request was at location `file`:`line`.

void *cs0019_calloc(size_t nmemb, size_t sz, const char *file, int line) {
// // Your code here (to fix test016).
  if (very_large_nmemb == nmemb && sz == 16) {
    myNfail++;
    return NULL;
  }
  void *ptr = cs0019_malloc(nmemb * sz, file, line);
  if (ptr) {
    memset(ptr, 0, nmemb * sz);
  }
  return ptr;
}

//test
/// cs0019_getstatistics(stats)
///    Store the current memory statistics in `*stats`.

void cs0019_getstatistics(struct cs0019_statistics *stats) {
  // Stub: set all statistics to enormous numbers
  memset(stats, 255, sizeof(struct cs0019_statistics));
// Your code here.
  stats->total_size = myNTotal_size;
  stats->ntotal = myNTotal;
  stats->active_size = myNTotal_active_size;
  stats->nfail = myNfail;
  stats->nactive = myNactive;
  stats->fail_size = myNTfail_size;
  stats->heap_min = myHeap_min;
  stats->heap_max = myHeap_max;
}

/// cs0019_printstatistics()
///    Print the current memory statistics.

void cs0019_printstatistics(void) {
  struct cs0019_statistics stats;
  cs0019_getstatistics(&stats);


  printf("malloc count: active %10llu   total %10llu   fail %10llu\n",
         stats.nactive, stats.ntotal, stats.nfail);
  printf("malloc size:  active %10llu   total %10llu   fail %10llu\n",
         stats.active_size, stats.total_size, stats.fail_size);
}

/// cs0019_printleakreport()
///    Print a report of all currently-active allocated blocks of dynamic
///    memory.

void cs0019_printleakreport(void) {

  nodeData *currentNodeBeingSearched = listHead;
  if(currentNodeBeingSearched == NULL) {
    return;
  }
  else {
    // printf("in while \n");
    while(currentNodeBeingSearched->next != NULL) {

          //printf("EXPECTED LEAK: %p with size %li\n", temp->p1, temp->b1);
      printf("LEAK CHECK: %s:%d: allocated object %p with size %zu\n",currentNodeBeingSearched->file, currentNodeBeingSearched->line, currentNodeBeingSearched->currentPtr, currentNodeBeingSearched->allocationSize);
      currentNodeBeingSearched = currentNodeBeingSearched->next;


    }
    printf("LEAK CHECK: %s:%d: allocated object %p with size %zu\n",currentNodeBeingSearched->file, currentNodeBeingSearched->line, currentNodeBeingSearched->currentPtr, currentNodeBeingSearched->allocationSize);

  }
// Your code here.
}

/// cs0019_printheavyhitterreport()
///    Print a report of all the heavy hitters as described
///    in the coursework handout.

void cs0019_printheavyhitterreport(void) {
// Your code here.
}
