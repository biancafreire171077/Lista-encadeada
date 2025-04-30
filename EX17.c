int buscarElemento(int arr[], int n, int x) {
    if (n == 0) return 0;
    return (arr[n - 1] == x) || buscarElemento(arr, n - 1, x);
}