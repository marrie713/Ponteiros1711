#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    char *nomes[] = {
        "Ana",
        "Bruno",
        "Carla",
        "Daniel",
        "Eduardo"
    };

    int tamanho = 5;
    char **ptr = nomes;

    for (int i = 0; i < tamanho; i++) {
        printf("%s\n", *(ptr + i));
    }

    return 0;
}

