int ehPrimoHelper(int n, int i) {
    if (n <= 2) return (n == 2);
    if (n % i == 0) return 0;
    if (i * i > n) return 1;
    return ehPrimoHelper(n, i + 1);
}
int ehPrimo(int n) {
    return ehPrimoHelper(n, 2);
}
