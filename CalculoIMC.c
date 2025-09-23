#include <stdio.h>

int main() {
    
    float peso, altura, imc, somaIMC = 0;
    int contadorUsuarios = 0;
    int opcao;

    printf("  Sistema de Calculo de IMC\n");
    printf("  Atividade II - Algoritmos e Pensamento Computacional\n");
    printf("  Professora Angela Perez Barcellos\n");

    do {
        printf("\nMenu de Opcoes:\n");
        printf("1 - Calcular IMC\n");
        printf("2 - Mostrar media geral dos IMCs\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("\nDigite seu peso (kg) (Utilize ponto para separar decimal): ");
                scanf("%f", &peso);
                printf("Digite sua altura (m) (Utilize ponto para separar decimal): ");
                scanf("%f", &altura);

                if (peso <= 0 || altura <= 0) {
                    printf("Valores invalidos! Tente novamente.\n");
                    break;
                }

                imc = peso / (altura * altura);
                printf("Seu IMC eh: %.2f\n", imc);

                if (imc < 18.5) {
                    printf("Classificacao: Abaixo do peso\n");
                } else if (imc < 24.9) {
                    printf("Classificacao: Peso normal\n");
                } else if (imc < 29.9) {
                    printf("Classificacao: Sobrepeso\n");
                } else if (imc < 34.9) {
                    printf("Classificacao: Obesidade grau 1\n");
                } else if (imc < 39.9) {
                    printf("Classificao: Obesidade grau 2\n");
                } else {
                    printf("Classificacao: Obesidade grau 3 (morbida)\n");
                }

                somaIMC += imc;
                contadorUsuarios++;
                break;

            case 2:
                if (contadorUsuarios == 0) {
                    printf("\nNenhum IMC calculado ainda.\n");
                } else {
                    printf("\nMedia geral dos IMCs: %.2f\n", somaIMC / contadorUsuarios);
                }
                break;

            case 3:
                printf("\nEncerrando o programa... Obrigado por utilizar!\n");
                break;

            default:
                printf("\nOpcao invalida! Escolha novamente.\n");
        }

    } while(opcao != 3);

    return 0;
}

