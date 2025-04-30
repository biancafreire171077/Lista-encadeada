void subconjuntos(int arr[], int n, int index, int subset[], int subsetSize) {
    if (index == n) {
        printf("{");
        for (int i = 0; i < subsetSize; i++) printf("%d ", subset[i]);
        printf("}\n");
        return;
    }
    subset[subsetSize] = arr[index];
    subconjuntos(arr, n, index + 1, subset, subsetSize + 1);
    subconjuntos(arr, n, index + 1, subset, subsetSize);
}
