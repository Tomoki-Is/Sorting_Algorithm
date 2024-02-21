void Selection_sort(int list[], int n) {
    for (int i = n - 1; i > 0; i--) {
        int max = list[0];
        int max_index = 0;
        for (int j = 1; j <= i; j++){
            if (list[j] >= max){
                max = list[j];
                max_index = j;
            }
        }
        swap(&list[i], &list[min]);
    }
}

// 選択ソート(再帰ver.)
void RecursiveSelection_sort(int list[], int num){
    int max;
    if (num > 1) { // 継続条件
        max = num - 1;
        for (int i = 0; i < num; i++){
            if (list[i] > list[max])
                max = i;
        }
    } 
    else // 終了条件
        return ;
    swap(&list[i], &list[min]);
    RecursiveSelection_sort(list, num - 1);
}