#include <stdio.h>

int ehPar(int numero) {

    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    int numero;
    int resultado;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    resultado = ehPar(numero);

    if (resultado == 1) {
        puts("O numero e par.");
    } else {
        puts("O numero e impar.");
    }

    return 0;
}
