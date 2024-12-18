#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include"sort/Bubble_sort.c"
#include"sort/Heap_sort.c"
#include"sort/Insertion_sort.c"
#include"sort/Merge_sort.c"
// #include"sort/Quick_sort.c"
#include"sort/Selection_sort.c"
#include"sort/Shell_sort.c"

typedef void (*Func)(int list[], int n);
Func Sort;

int Input(void){
    printf("Input number of sorting\n");
    printf("0 : Bubble sort\n");
    printf("1 : Heap sort\n");
    printf("2 : Insertion sort\n");
    printf("3 : Merge sort\n");
    // printf("4 :  sort\n");
    printf("5 : Selection sort\n");
    printf("6 : Selection sort(recursive ver.)\n");
    printf("7 : Shell sort\n");
    printf("Input :");
    int number;
    scanf("%d", &number);
    return number;
}

void Select_Sort(int select){
    if(select == 0){
      printf("Bubble sort\n");
      Sort=&Bubble_sort;
    }
    else if(select == 1){
      printf("Heap sort\n");
      Sort=&Heap_sort;
    }
    else if(select == 2){
      printf("Insertion sort\n");
      Sort=&Insertion_sort;
    }
    else if(select == 3){
      printf("Merge sort\n");
      Sort=&Merge_sort;
    }
    // else if(select == 4){
    //   printf("sort\n");
    //   Sort=&Quick_sort;
    // }
    else if(select == 5){
      printf("Selection sort\n");
      Sort=&Selection_sort;
    }
    else if(select == 6){
      printf("Selection sort(recursive ver.)\n");
      Sort=&RecursiveSelection_sort;
    }
    else if(select == 7){
      printf("Shell sort\n");
      Sort=&Shell_sort;
    }
}

int main(void)
{
    int select = Input();
    Select_Sort(select);

    long long int loop = 100000000; // ループ回数
    bool isPrint = false;

    clock_t start, end;
    start = clock();

    for(int i = 0; i < loop; i++){

      int A[] = {4, 6, 7, 2, 1, 8, 9, 3, 5, 0};
      int n = sizeof(A) / sizeof(A[0]); // 配列長の取得

      Sort(A, n);

      if (!isPrint){
        for (int j = 0; j < n; j++)
        {
          printf("%d ", A[j]);
        }
        printf("\n");
        isPrint = true;
    }
    }

    end = clock();
    double used_time = (end - start) / (double)loop;
    printf("Average calc time = %f sec.\n", used_time);

    return 0;
}
