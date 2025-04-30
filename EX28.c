int tabuleiro[N];
int podeColocar(int linha, int coluna) {
    for (int i = 0; i < linha; i++) {
        if (tabuleiro[i] == coluna || abs(tabuleiro[i] - coluna) == abs(i - linha)) return 0;
    }
    return 1;
}
void resolverRainhas(int linha) {
    if (linha == N) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) printf(tabuleiro[i] == j ? "Q " : ". ");
            printf("\n");
        }
        printf("\n");
        return;
    }
    for (int col = 0; col < N; col++) {
        if (podeColocar(linha, col)) {
            tabuleiro[linha] = col;
            resolverRainhas(linha + 1);
        }
    }
}
