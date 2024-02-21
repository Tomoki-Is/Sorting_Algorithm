void PushHeap(int T[], int* size, int x){
    
    *size = *size + 1;
    T[*size] = x;
    int k = *size; 

    while ((T[k] > T[k - 2]) && k > 1){
        swap(&T[k], &T[k / 2]);
        k = k / 2;
    }
}

int DeleteMaxinum(int T[], int* size){

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

 