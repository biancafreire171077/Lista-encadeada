int buscaBinaria(int arr[], int inicio, int fim, int alvo) {
    if (inicio > fim) return -1;
    int meio = (inicio + fim) / 2;
    if (arr[meio] == alvo) return meio;
    if (alvo < arr[meio])
       return buscaBinaria(arr, inicio,, meio - 1, alvo);
    return buscaBinaria(arr, meio + 1, fim, alvo);}

    