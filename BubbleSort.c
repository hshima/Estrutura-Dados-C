#include <stdio.h>

void bubbleSort(int v[]){
  int x;
  printf("BubbleSort:\n");
  printf("Base: %d, %d, %d, %d, %d, %d, %d\n", v[0], v[1], v[2], v[3], v[4], v[5], v[6]);
  for (int i = 0; i <= sizeof(v-1); i++)
  {
    printf("Laço i = %d -------------\n", i+1);
    for (int j = 0; j <= sizeof(v-i); j++)
    {
      if (v[j] > v[j+1] && v[j+1] != NULL) 
      {
        x = v[j];
        v[j] = v[j+1];
        v[j+1] = x;
      }
    }
    printf("%d, %d, %d, %d, %d, %d, %d\n", v[0], v[1], v[2], v[3], v[4], v[5], v[6]);
  }
}
