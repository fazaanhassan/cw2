#include "cs0019.h"
#include <stdio.h>
// Active allocation sizes.

int main() {
  void *ptrs[10];
  for (int i = 0; i < 10; ++i) {
    ptrs[i] = malloc(i + 1);
  }
  for (int i = 0; i < 5; ++i) {
    free(ptrs[i]);
  }
  cs0019_printstatistics();
}

//! malloc count: active          5   total         10   fail        ???
//! malloc size:  active         40   total         55   fail        ???
