void inverterString(char *str, int i, int j) {
    if (i >= j) return;
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    inverterString(str, i + 1, j - 1);
}