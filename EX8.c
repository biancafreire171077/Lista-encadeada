int ehPalindromo(char *str, int i, int j) {
    if (i >= j) return 1;
    if (str[i] != str[j]) return 0;
    return ehPalindromo(str, i + 1, j - 1);
}