#include <stdio.h>

void mostrarTabuada(int numero) {

    int i;

    for (i = 1; i <= 10; i++) {

        printf("%d x %d = %d", numero, i, numero * i);
        puts("");
    }
}

int main() {

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    mostrarTabuada(numero);

    return 0;
}
