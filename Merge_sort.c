#include <string.h>

void Merge(int A[], int left, int mid, int right){
    int* M = (int*)malloc(sizeof(int) * (sizeof A / sizeof A[0]));
    int x = left;
    int y = mid + 1;

    for (int i = 0; i <= right - left; i++){ 
        if (x == mid + 1){
            M[i] = A[y]; 
            y++; 
        } 
        else if (y == right + 1){ 
            M[i] = A[x]; 
            x++; 
        }
        else if (A[x] <= A[y]){
            M[i] = A[x];
            x++;
        } 
        else{
            M[i] = A[y];
            y++;
        }
    } 

    // 配列Mをコピー 
    for (int i = 0; i <= right - left; i++){ 
        A[left + i] = M[i]; 
    }
}

void Merge_sort(int A[]){
    int right = sizeof(A) / sizeof(A[0]) - 1;
    int left = 0;

    int mid = (left + right) / 2;
    if (left < mid) Merge(A, left, mid); 
    if (mid + 1 < right) Merge(A, mid + 1, right); 

    MergeSort(A, left, mid, right); 
} 

 