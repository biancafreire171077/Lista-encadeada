int contarChar(const char *str, char c) {
    if (*str == '\0') return 0;
    return (*str == c) + contarChar(str + 1, c);
}