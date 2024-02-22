#include<stdio.h>
#include"Swap.c"

void Bubble_sort(int list[]) {
    // int n = sizeof list / sizeof list[0]; // 静的でしか使えない

    printf("size :");
    printf("%d\n", n);
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j <n; j++) {
            if (list[i] > list[j])
                swap(&list[i], &list[j]);
        }
    }
}