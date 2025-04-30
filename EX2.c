int somaNaturais(int n) {
    if (n == 0) return 0;
    return n + somaNaturais(n - 1);
}