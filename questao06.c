#include <stdio.h>

float somar(float n1, float n2) {
    return n1 + n2;
}

float subtrair(float n1, float n2) {
    return n1 - n2;
}

float multiplicar(float n1, float n2) {
    return n1 * n2;
}

float dividir(float n1, float n2) {
    return n1 / n2;
}

int main() {

    float n1, n2;
    float resultado;
    int opcao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    puts("===== CALCULADORA =====");
    puts("1 - Adicao");
    puts("2 - Subtracao");
    puts("3 - Multiplicacao");
    puts("4 - Divisao");

    printf("Escolha uma operacao: ");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
            resultado = somar(n1, n2);
            break;

        case 2:
            resultado = subtrair(n1, n2);
            break;

        case 3:
            resultado = multiplicar(n1, n2);
            break;

        case 4:
            if (n2 != 0) {
                resultado = dividir(n1, n2);
            } else {
                puts("Erro: divisao por zero!");
                return 0;
            }
            break;

        default:
            puts("Opcao invalida!");
            return 0;
    }

    printf("Resultado: %.2f", resultado);

    return 0;
}
