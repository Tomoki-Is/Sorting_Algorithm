#include<stdio.h>
#include<string.h>
#include"Bubble_sort.c"
#include"Heap_sort.c"
#include"Insertion_sort.c"
#include"Merge_sort.c"
#include"Quick_sort.c"
#include"Selection_sort.c"
#include"Shell_sort.c"

int select = 0;

int main(void)
{
  typedef int (*Func)(int list, int n);
  Func Sort;

  if(select == 0){
    Sort=&Bubble_sort;
  }
  else if(select == 1){
    Sort=&Heap_sort;
  }
  else if(select == 2){
    Sort=&Insertion_sort;
  }
  else if(select == 3){
    Sort=&Merge_sort;
  }
  else if(select == 4){
    Sort=&Quick_sort;
  }
  else if(select == 5){
    Sort=&Selection_sort;
  }
  else if(select == 6){
    Sort=&RecursiveSelection_sort;
  }
  else if(select == 7){
    Sort=&Shell_sort;
  }

  return 0;
}
