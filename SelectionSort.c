#include <stdio.h>

void selectionSort(int v[])
{
  int x, j;
  printf("SelectionSort:\n");
  printf("Base: %d, %d, %d, %d, %d, %d, %d\n", v[0], v[1], v[2], v[3], v[4], v[5], v[6]);
  for (int i = 0; i <= sizeof(v); i++)
  {
    printf("Laço i = %d -------------\n", i+1);
    for (j = i + 1; j <= sizeof(v); j++)
    {
      int min = i;
      if ( v[j] < v[min] && v[j] != NULL)
      {
        min = j;
        x = v[min];
        v[min] = v[i];
        v[i] = x;
      }
      printf("%d, %d, %d, %d, %d, %d, %d\n", v[0], v[1], v[2], v[3], v[4], v[5], v[6]);
    }
    
  }
}