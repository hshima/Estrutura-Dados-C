#include <stdio.h>

void insertionSort(int v[])
{
  printf("InsertionSort:\n");
  printf("Base: %d, %d, %d, %d, %d, %d, %d\n", v[0], v[1], v[2], v[3], v[4], v[5], v[6]); 
  for (int i = 1; i < sizeof(v); i++)
  {
    printf("Laço i = %d -------------\n", i+1);
    int x = v[i];
    int j = i-1;
    for (j; j >= 0 && x < v[j] && i+1 < sizeof(v); j--)
    {
      v[j+1] = v[j];
    }
    v[j+1] = x;
    
    printf("%d, %d, %d, %d, %d, %d, %d\n", v[0], v[1], v[2], v[3], v[4], v[5], v[6]);
  }
}