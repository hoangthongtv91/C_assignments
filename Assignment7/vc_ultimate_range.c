/**
 * File              : vc_ultimate_range.c
 * Author            : Daisuke, Tom
 * Date              : Mon, Feb 11, 2019
 */
#include <stdio.h>
#include <stdlib.h>
int vc_ultimate_range(int **range, int min, int max) {
  if (min >= max) {
    *range = NULL;
    return 0;
  }
  int size = max - min;
  int *p = *range = (int *)malloc(sizeof(int) * size);
  for (int i = min; i < max; i++, p++) *p = i;
  return size;
}