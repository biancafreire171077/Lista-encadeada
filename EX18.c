int comprimentoString(const char *str) {
    if (*str == '\0') return 0;
    return 1 + comprimentoString(str + 1);
}
