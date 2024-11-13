// 選択ソート
void Selection_sort(int list[], int n) {
    for (int i = n - 1; i > 0; i--) {
        int max = list[0];
        int max_index = 0;
        for (int j = 1; j <= i; j++) {
            if (list[j] > max) { // 最大値を見つける
                max = list[j];
                max_index = j;
            }
        }
        // 最大値を現在の末尾と交換
        if (max_index != i) {
            swap(&list[i], &list[max_index]);

        }
    }
}

// 選択ソート(再帰ver.)
void RecursiveSelection_sort(int list[], int n) {
    // 終了条件
    if (n <= 1) {
        return;
    }
  
    // 最小値のインデックスを見つける
    int min_index = 0;
    for (int i = 1; i < n; i++) {
        if (list[i] < list[min_index]) {
            min_index = i;
        }
    }
  
    // 最小値を未ソート部分の先頭と交換
    if (min_index != 0) {
        swap(&list[min_index], &list[0]);
    }
  
    // 再帰的に残りの部分をソート
    RecursiveSelection_sort(list + 1, n - 1);
}
