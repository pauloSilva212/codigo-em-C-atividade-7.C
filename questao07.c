#include <stdio.h>

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

void verificarSituacao(float media) {

    if (media >= 7.0) {
        puts("Aluno aprovado!");
    } else {
        puts("Aluno reprovado!");
    }
}

int main() {

    float n1, n2, n3;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = calcularMedia(n1, n2, n3);

    printf("Media: %.2f", media);

    verificarSituacao(media);

    return 0;
}
