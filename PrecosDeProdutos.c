#include <stdio.h>

#define TAMANHO 10

// Função para exibir o vetor
void exibirVetor(float vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("R$ %.2f  ", vetor[i]);
    }
    printf("\n");
}

// Bubble Sort para ordenacao crescente
void bubbleSortCrescente(float vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                float temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

// Bubble Sort para ordenacaoo decrescente
void bubbleSortDecrescente(float vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] < vetor[j + 1]) {
                float temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    float precos[TAMANHO];

    printf("=============================================\n");
    printf("      PROGRAMA DE ORDENACAO - BUBBLE SORT     \n");
    printf("        Tema: Preços de Produtos              \n");
    printf("               Atividade 4                    \n");
    printf("    Professora Angela Perez Barcellos         \n");
    printf("=============================================\n\n");

    // Entrada dos precos pelo usuario
    printf("Digite os precos de 10 produtos:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Produto %d: R$ ", i + 1);
        scanf("%f", &precos[i]);
    }

    printf("\n>>> Precos Originais <<<\n");
    exibirVetor(precos, TAMANHO);

    // Ordenação crescente
    float crescente[TAMANHO];
    for (int i = 0; i < TAMANHO; i++) crescente[i] = precos[i];
    bubbleSortCrescente(crescente, TAMANHO);
    printf("\n>>> Precos em Ordem Crescente <<<\n");
    exibirVetor(crescente, TAMANHO);

    // Ordenação decrescente
    float decrescente[TAMANHO];
    for (int i = 0; i < TAMANHO; i++) decrescente[i] = precos[i];
    bubbleSortDecrescente(decrescente, TAMANHO);
    printf("\n>>> Precos em Ordem Decrescente <<<\n");
    exibirVetor(decrescente, TAMANHO);

    printf("\nObrigado por utilizar o programa!\n");

    return 0;
}
