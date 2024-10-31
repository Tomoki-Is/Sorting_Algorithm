#include <string.h>

void Merge(int A[], int left, int mid, int right){
    int *M = (int *)malloc(sizeof(int) * (right - left + 1));
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

    // 配列MをAにコピー
    for (int i = 0; i <= right - left; i++){
        A[left + i] = M[i];
    }
    free(M); // メモリ解放
}

void divide(int A[], int left, int right){
    int mid = (left + right) / 2;
    if (left < mid)
        divide(A, left, mid);
    if (mid + 1 < right)
        divide(A, mid + 1, right);

    // 統治
    Merge(A, left, mid, right);
}

void Merge_sort(int A[], int n){
    divide(A, 0, n - 1);
}
