#include <stdio.h>

float calcularTotal(float vendas[]) {

    int i;
    float total = 0;

    for (i = 0; i < 5; i++) {
        total = total + vendas[i];
    }

    return total;
}

float calcularMedia(float total, int dias) {

    return total / dias;
}

int contarVendasAcimaDaMedia(float vendas[], float media) {

    int i;
    int contador = 0;

    for (i = 0; i < 5; i++) {

        if (vendas[i] > media) {
            contador++;
        }
    }

    return contador;
}

int main() {

    float vendas[5];
    float total;
    float media;
    int quantidade;
    int i;

    for (i = 0; i < 5; i++) {

        printf("Digite o valor da venda do dia %d: ", i + 1);
        scanf("%f", &vendas[i]);
    }

    total = calcularTotal(vendas);

    media = calcularMedia(total, 5);

    quantidade = contarVendasAcimaDaMedia(vendas, media);

    printf("Total vendido: R$ %.2f", total);
    puts("");

    printf("Media diaria: R$ %.2f", media);
    puts("");

    printf("Dias com vendas acima da media: %d", quantidade);
    puts("");

    return 0;
}
