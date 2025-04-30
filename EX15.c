void imprimirPares(int n) {
    if (n < 0) return;
    imprimirPares(n - 2);
    if (n % 2 == 0) printf("%d ", n);
}
