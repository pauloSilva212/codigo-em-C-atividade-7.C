#include <stdio.h>

float calcularMediaTurma(float notas[]) {

    int i;
    float soma = 0;

    for (i = 0; i < 10; i++) {
        soma = soma + notas[i];
    }

    return soma / 10;
}

float encontrarMaiorNota(float notas[]) {

    int i;
    float maior = notas[0];

    for (i = 1; i < 10; i++) {

        if (notas[i] > maior) {
            maior = notas[i];
        }
    }

    return maior;
}

int contarAprovados(float notas[]) {

    int i;
    int contador = 0;

    for (i = 0; i < 10; i++) {

        if (notas[i] >= 7.0) {
            contador++;
        }
    }

    return contador;
}

void exibirResultados(float media, float maior, int aprovados) {

    printf("Media da turma: %.2f", media);
    puts("");

    printf("Maior nota: %.2f", maior);
    puts("");

    printf("Quantidade de aprovados: %d", aprovados);
    puts("");
}

int main() {

    float notas[10];
    float media;
    float maior;
    int aprovados;
    int i;

    for (i = 0; i < 10; i++) {

        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    media = calcularMediaTurma(notas);

    maior = encontrarMaiorNota(notas);

    aprovados = contarAprovados(notas);

    exibirResultados(media, maior, aprovados);

    return 0;
}
