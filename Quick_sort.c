int Partition(int A[], int lo, int hi){
    int i, j;
    int pivot = A[hi];

    if (lo == hi) return hi;

    i = lo;
    for (j = lo; j < hi; j++){
        if (A[j] <= pivot){
            if (j != i){
                swap(&A[i], &A[j]);
            }
            i++;
        }
    }

    if (i != hi){
        swap(&A[i], &A[hi]);
    }

    return i;
}

void Qsort(int a[], int lo, int hi){
    if (lo < hi){
        int mid = Partition(a, lo, hi);
        Qsort(a, lo, mid - 1);
        Qsort(a, mid + 1, hi);
    }
}

void Qfunc(int a[], int lo, int hi, int k){
    if (lo < hi){
        int mid = Partition(a, lo, hi);
        if (k < mid)Qfunc(a, lo, mid - 1, k);
        if (k > mid)Qfunc(a, mid - 1, hi, k);
    }
}
