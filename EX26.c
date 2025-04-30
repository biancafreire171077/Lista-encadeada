int exponenciacaoRapida(int x, int n) {
    if (n == 0) return 1;
    int half = exponenciacaoRapida(x, n / 2);
    if (n % 2 == 0) return half * half;
    return x * half * half;
}
