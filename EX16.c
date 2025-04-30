void imprimirImpares(int n) {
    if (n < 1) return;
    imprimirImpares(n - 2);
    if (n % 2 != 0) printf("%d ", n);
}