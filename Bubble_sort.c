#include<stdio.h>

void Bubble_sort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j <n; j++) {
            if (a[i] > a[j])
                swap(&a[i], &a[j]);
        }
    }
}