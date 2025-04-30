void contagemRegressiva(int n) {
    if (n < 0) return;
    printf("%d ", n);
    contagemRegressiva(n - 1);
}