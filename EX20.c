void trocar(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}
void permutacoes(char *str, int l, int r) {
    if (l == r) printf("%s\n", str);
    else {
        for (int i = l; i <= r; i++) {
            trocar(&str[l], &str[i]);
            permutacoes(str, l + 1, r);
            trocar(&str[l], &str[i]);
        }
    }
}