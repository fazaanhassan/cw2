#define CS0019_DISABLE 1
#include "cs0019.h"
#include <assert.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// static struct cs0019_statistics {
//   unsigned long long nactive;     // # active allocations
//   unsigned long long active_size; // # bytes in active allocations
//   unsigned long long ntotal;      // # total allocations
//   unsigned long long total_size;  // # bytes in total allocations
//   unsigned long long nfail;       // # failed allocation attempts
//   unsigned long long fail_size;   // # bytes in failed alloc attempts
//   char *heap_min;                 // smallest allocated addr
//   char *heap_max;                 // largest allocated addr
// };

/// cs0019_malloc(sz, file, line)
///    Return a pointer to `sz` bytes of newly-allocated dynamic memory.
///    The memory is not initialized. If `sz == 0`, then cs0019_malloc may
///    either return NULL or a unique, newly-allocated pointer value.
///    The allocation request was at location `file`:`line`.

//askdljaslkdj
static unsigned long long int myNactive = 0;
static unsigned long long int myNTotal_active_size = 0;
static unsigned long long int myNtotal = 0;
static unsigned long long int myNTotal_size = 0;
static unsigned long long int myNfail = 0;
static unsigned long long int myNTfail_size = 0;

void *cs0019_malloc(size_t sz, const char *file, int line) {
  (void)file, (void)line; // avoid uninitialized variable warnings
  // Your code here.

  myNTotal_size += sz;
  myNtotal++;
  myNactive = myNtotal;
  if(sz <= 0) {
    myNfail++;
    myNTfail_size += sz;
  }
  
  return base_malloc(sz);
}

/// cs0019_free(ptr, file, line)
///    Free the memory space pointed to by `ptr`, which must have been
///    returned by a previous call to cs0019_malloc and friends. If
///    `ptr == NULL`, does nothing. The free was called at location
///    `file`:`line`.

void cs0019_free(void *ptr, const char *file, int line) {
  (void)file, (void)line; // avoid uninitialized variable warnings
// Your code here.
  if (ptr != NULL && myNactive > 0) {
      myNactive--;
  }
  

  base_free(ptr);
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
// Copy the data from `ptr` into `new_ptr`.
// To do that, we must figure out the size of allocation `ptr`.
// Your code here (to fix test014).
  }
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
// Your code here (to fix test016).
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
  memset(stats, 0, sizeof(struct cs0019_statistics));
// Your code here.
  stats->total_size = myNTotal_size;
  stats->ntotal = myNtotal;
  stats->nfail = myNfail;
  stats->nactive = myNactive;
  stats->fail_size = myNTfail_size;
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
// Your code here.
}

/// cs0019_printheavyhitterreport()
///    Print a report of all the heavy hitters as described
///    in the coursework handout.

void cs0019_printheavyhitterreport(void) {
// Your code here.
}
