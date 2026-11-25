#include <stdio.h>

int calcularTotalEstoque(int estoque[]) {

    int i;
    int total = 0;

    for (i = 0; i < 8; i++) {
        total = total + estoque[i];
    }

    return total;
}

int contarEstoqueBaixo(int estoque[]) {

    int i;
    int contador = 0;

    for (i = 0; i < 8; i++) {

        if (estoque[i] < 5) {
            contador++;
        }
    }

    return contador;
}

int buscarProduto(int estoque[], int codigo) {

    int indice = codigo - 1;

    if (indice >= 0 && indice < 8) {
        return indice;
    }

    return -1;
}

int main() {

    int estoque[8];
    int i;
    int total;
    int quantidadeBaixa;
    int codigo;
    int posicao;

    for (i = 0; i < 8; i++) {

        printf("Digite a quantidade do produto %d: ", i + 1);
        scanf("%d", &estoque[i]);
    }

    total = calcularTotalEstoque(estoque);

    quantidadeBaixa = contarEstoqueBaixo(estoque);

    printf("Total de unidades em estoque: %d", total);
    puts("");

    printf("Produtos com estoque baixo: %d", quantidadeBaixa);
    puts("");

    printf("Digite o codigo do produto que deseja buscar: ");
    scanf("%d", &codigo);

    posicao = buscarProduto(estoque, codigo);

    if (posicao != -1) {

        printf("Produto encontrado na posicao %d", posicao);
        puts("");

        printf("Quantidade disponivel: %d", estoque[posicao]);
        puts("");

    } else {

        puts("Produto nao encontrado!");
    }

    return 0;
}
