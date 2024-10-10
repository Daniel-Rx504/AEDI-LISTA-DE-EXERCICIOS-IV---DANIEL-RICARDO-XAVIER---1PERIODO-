#include <stdio.h>

int main() {
    int lista[10];
    int valorProcurado;
    int i;

    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &lista[i]);
    }

    printf("Qual o numero que deseja buscar: ");
    scanf("%d", &valorProcurado);

    for (i = 0; i < 10; i++) {
        if (lista[i] == valorProcurado) {
            printf("O numero %d foi encontrado na posicao %d.\n", valorProcurado, i + 1);
            return 0;
        }
    }

    printf("O numero %d nao foi encontrado na lista.\n", valorProcurado);

    return 0;
}

