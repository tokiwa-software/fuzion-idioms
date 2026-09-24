#include <stdio.h>
#include "foo.h"

/* print the received array */
void foo(double *a, int n)
{
  for (int i = 0; i < n; i++)
    printf("%.1f ", a[i]);
  printf("\n");
}
