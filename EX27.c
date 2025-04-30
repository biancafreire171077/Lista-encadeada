int contarCaminhos(int x, int y, int n, int m) {
    if (x == n - 1 && y == m - 1) return 1;
    if (x >= n || y >= m) return 0;
    return contarCaminhos(x + 1, y, n, m) + contarCaminhos(x, y + 1, n, m);
}