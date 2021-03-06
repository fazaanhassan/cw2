#include "cs0019.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>
// A correct execution should not report errors.

int main() {
  for (int i = 0; i < 10; ++i) {
    int *ptr = (int *)malloc(sizeof(int) * 10);
    for (int j = 0; j < 10; ++j) {
      ptr[i] = i;
    }
    free(ptr);
  }
  cs0019_printstatistics();
}

//! malloc count: active          0   total         10   fail          0
//! malloc size:  active          0   total        400   fail          0
