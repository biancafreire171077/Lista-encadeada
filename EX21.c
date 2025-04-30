void combinacoesUtil(int arr[], int data[], int start, int end, int index, int k) {
    if (index == k) {
        for (int j = 0; j < k; j++) printf("%d ", data[j]);
        printf("\n");
        return;
    }
    for (int i = start; i <= end && end - i + 1 >= k - index; i++) {
        data[index] = arr[i];
        combinacoesUtil(arr, data, i + 1, end, index + 1, k);
    }
}
