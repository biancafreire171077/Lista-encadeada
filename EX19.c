void torreHanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 0) return;
    torreHanoi(n - 1, origem, auxiliar, destino);
    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    torreHanoi(n - 1, auxiliar, destino, origem);
}
