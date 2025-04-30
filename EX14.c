void decimalParaBinario(int n) {
    if (n == 0) return;
    decimalParaBinario(n / 2);
    printf("%d", n % 2);
}