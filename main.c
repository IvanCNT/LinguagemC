#include <stdio.h>

int main() {
    // Declaração das variáveis
    float metros, centimetros;

    // Entrada de dados
    printf("Digite o valor em metros: ");
    scanf("%f", &metros);

    // Processamento
    centimetros = metros * 100;

    // Saída de dados
    printf("%.2f metros equivale a %.2f centimetros.\n", metros, centimetros);

    return 0;
}

 