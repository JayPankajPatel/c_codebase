#ifndef __UTILS__H
#define __UTILS__H

#include <stdio.h>
#include <stdlib.h> //malloc, free
#define FN_APPLY(type, fn, ...) {                                             \
    void *stopper_for_apply = (int[]){0};                                      \
    type **list_for_apply = (type *[]){__VA_ARGS__, stopper_for_apply};        \
    for (int i = 0; list_for_apply[i] != stopper_for_apply; i++)               \
      fn(list_for_apply[i]);                                                   \
  }
#define FREE_ALL(...) FN_APPLY(void, free, __VA_ARGS__)

#define FOR_EACH_ITR(type, arr, size) for(type *ITR = arr; ITR != (arr + size); ITR++)
#define MAX(a, b) ((a) > (b) ? (a) : (b)) 
#endif // __UTILS__H

