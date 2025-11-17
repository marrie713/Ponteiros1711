#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char *strchr(char *s, char ch) {
    while (*s != '\0') {
        if (*s == ch) {
            return s;
        }
        s++;
    }
    return NULL;
}



int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    char texto[100];
    char c, *resultado;

    printf("Digite uma string: ");
    fgets(texto, 100, stdin);

    printf("Digite um caractere para buscar: ");
    scanf("%c", &c);

    resultado = strchr(texto, c);

    if (resultado != NULL) {
        printf("A partir do caractere encontrado:\n");
        while (*resultado != '\0') {
            putchar(*resultado);
            resultado++;
        }
    } else {
        printf("Caractere nao encontrado.\n");
    }

    return 0;
}

