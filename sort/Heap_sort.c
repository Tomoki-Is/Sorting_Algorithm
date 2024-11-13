void PushHeap(int T[], int* size, int x){
    *size = *size + 1;
    T[*size] = x;
    int k = *size; 

    while ((T[k] > T[k - 2]) && k > 1){
        swap(&T[k], &T[k / 2]);
        k = k / 2;
    }
}

int DeleteMaximum(int T[], int* size){
    int max, k, big;
    max = T[1];
    T[1] = T[*size];
    T[*size] = 0;
    *size = *size - 1;
    k = 1;

    while (2 * k <= *size){
        if (2 * k == *size){
            if (T[k] < T[2 * k]){
                swap(&T[k], &T[2 * k]);
                k = 2 * k;
            }else break;
        }else{
            if (T[2 * k] > T[2 * k + 1]){
                big = 2 * k;
            }else{
                big = 2 * k + 1;
            }
            if (T[k] < T[big]){
                swap(&T[k], &T[big]);
                k = big;
            }else{
                break;
            }
        }
    }
    return max;
}

void Heap_sort(int A[], int n){
    int size = 0;
    
    // 一時的にヒープを格納する配列
    int* tempHeap = (int*)malloc((n + 1) * sizeof(int));

    // 配列の要素をヒープに追加
    for(int i = 0; i < n; i++){
        PushHeap(tempHeap, &size, A[i]);
    }

    // ヒープから最大値を削除しながら配列に格納していく
    for(int i = n - 1; i >= 0; i--){
        A[i] = DeleteMaximum(tempHeap, &size);
    }

    free(tempHeap); // メモリの解放
}
