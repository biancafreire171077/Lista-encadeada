#define MAX 10
int caminhoLabirinto(int lab[MAX][MAX], int sol[MAX][MAX], int x, int y, int n, int m) {
    if (x == n - 1 && y == m - 1) {
        sol[x][y] = 1;
        return 1;
    }
    if (x >= 0 && y >= 0 && x < n && y < m && lab[x][y] == 0) {
        sol[x][y] = 1;
        if (caminhoLabirinto(lab, sol, x + 1, y, n, m)) return 1;
        if (caminhoLabirinto(lab, sol, x, y + 1, n, m)) return 1;
        sol[x][y] = 0;
    }
    return 0;
}