void Insertion_sort(int a[], int n){
    for (int i = 1; i < n; i++){
        int j = i;
        int x = a[i];
        while (j > 0 && a[j - 1] > x){
            a[j] = a[j - 1];
            j--;
        }
        a[j] = x;
    }
}