#include <stdio.h>

int ehPrimo(int numero) {

    int i;

    if (numero < 2) {
        return 0;
    }

    for (i = 2; i * i <= numero; i++) {

        if (numero % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {

    int numero;
    int resultado;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    resultado = ehPrimo(numero);

    if (resultado == 1) {
        puts("O numero e primo!");
    } else {
        puts("O numero nao e primo!");
    }

    return 0;
}
