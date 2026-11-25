#include <stdio.h>

float celsiusParaFahrenheit(float celsius) {

    return (9 * celsius) / 5 + 32;
}

int main() {

    float temperatura;
    float resultado;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperatura);

    resultado = celsiusParaFahrenheit(temperatura);

    printf("Temperatura em Fahrenheit: %.2f", resultado);

    return 0;
}
