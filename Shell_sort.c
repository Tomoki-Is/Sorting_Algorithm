// シェルソート
void Shell_sort(int a[], int n) {
    // 間隔gapを設定
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // gapだけ離れた要素群に対して挿入ソートを適用
        for (int i = gap; i < n; i += 1) {
            // 現在の要素をtempに格納し、正しい位置を探索
            int temp = a[i];
            int j;
            for (j = i; j >= gap && a[j - gap] > temp; j -= gap) {
                // 要素をgapだけ後ろに移動
                a[j] = a[j - gap];
            }
            // tempを正しい位置に挿入
            a[j] = temp;
        }
    }
}
