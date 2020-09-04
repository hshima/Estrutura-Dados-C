#include <stdio.h>
#include <time.h>
#include "interfaces/Sorting.h"

int v[] = {6, 9, 4, 1, 5, 7, 8};

int main(void) {     
  clock_t start, end;
  double cpu_time_used;
     
  start = clock();
  printf("start: %ld\n", start);
  
//  for (int i = 0; i <= 1000000 ; i++)
  {
    //bubbleSort(v);
    selectionSort(v);
    //insertionSort(v);
  }

  end = clock();
  printf("stop: %ld\n", end);
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Tempo de execução: %f\n", cpu_time_used);
  printf("Tempo médio de execução: %f\n", cpu_time_used/1000000);
  return 0;
}