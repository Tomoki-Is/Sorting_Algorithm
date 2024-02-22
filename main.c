#include<stdio.h>
#include<string.h>
#include"Bubble_sort.c"
// #include"Heap_sort.c"
#include"Insertion_sort.c"
// #include"Merge_sort.c"
// #include"Quick_sort.c"
// #include"Selection_sort.c"
// #include"Shell_sort.c"

int select = 2;

int main(void)
{
  typedef void (*Func)(int list[], int n);
  Func Sort;
  
  if(select == 0){
    Sort=&Bubble_sort;
  }
  // else if(select == 1){
  //   Sort=&Heap_sort;
  // }
  else if(select == 2){
    Sort=&Insertion_sort;
  }
  // else if(select == 3){
  //   Sort=&Merge_sort;
  // }
  // else if(select == 4){
  //   Sort=&Quick_sort;
  // }
  // else if(select == 5){
  //   Sort=&Selection_sort;
  // }
  // else if(select == 6){
  //   Sort=&RecursiveSelection_sort;
  // }
  // else if(select == 7){
  //   Sort=&Shell_sort;
  // }


  for(int i = 0; i < 10; i++){
    int A[] = {4, 6, 7, 2, 1, 8, 9, 3, 5}; // 並び変える配列
    int n = sizeof(A) / sizeof(A[0]); // 配列長の取得
    
    Sort(A, n);

    for(int j = 0; j < n; j++){
      printf("%d ", A[j]);
    }
    printf("\n");
  }
  printf("\n");

  return 0;
}
