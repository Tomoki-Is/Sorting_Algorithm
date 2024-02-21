// シェルソート
void Shell_sort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j <= 1 && a[j - 1] > a[j]) {
            swap(&a[j], &a[j - 1]);
            j--;
        }
    }
}