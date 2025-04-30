int buscaBinaria(int arr[], int l, int r, int x) {
    if (l > r) return -1;
    int m = l + (r - l) / 2;
    if (arr[m] == x) return m;
    if (arr[m] > x) return buscaBinaria(arr, l, m - 1, x);
    return buscaBinaria(arr, m + 1, r, x);
}

/* 26. Exponenciação rápida */
int exponenciacaoRapida(int x, int n) {
    if (n == 0) return 1;
    int half = exponenciacaoRapida(x, n / 2);
    if (n % 2 == 0) return half * half;
    return x * half * half;
}

/* 27. Caminho em matriz (contagem de caminhos) */
int contarCaminhos(int x, int y, int n, int m) {
    if (x == n - 1 && y == m - 1) return 1;
    if (x >= n || y >= m) return 0;
    return contarCaminhos(x + 1, y, n, m) + contarCaminhos(x, y + 1, n, m);
}
