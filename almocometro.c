#include <stdio.h>
#include <string.h>

#define DIAS 7

int main() {
    
    printf("=====================================\n");
    printf("         Bem-vindo ao Almocometro    \n");
    printf("              Atividade 3            \n");
    printf("  Professora Angela Perez Barcellos  \n");
    printf("=====================================\n\n");

    // Vetores
    int almocos[DIAS];
    char diasSemana[DIAS][10] = {"Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado"};
    int total = 0;
    float media;

    // Entrada
    for (int i = 0; i < DIAS; i++) {
        printf("Digite o numero de almocos servidos na %s: ", diasSemana[i]);
        scanf("%d", &almocos[i]);
        total += almocos[i];
    }

    // Cálculo da media
    media = total / (float)DIAS;

    // Exibição dos dados
    printf("\n-------------------------------------\n");
    printf("Resumo da Semana:\n");
    printf("-------------------------------------\n");
    for (int i = 0; i < DIAS; i++) {
        printf("%s: %d almocos\n", diasSemana[i], almocos[i]);
    }

    printf("\nMedia semanal de almocos servidos: %.2f\n", media);

    // Maior consumo
    int pico = 0;
    for (int i = 1; i < DIAS; i++) {
        if (almocos[i] > almocos[pico]) {
            pico = i;
        }
    }

    printf("\n Dia de Pico: \033[1m%s\033[0m com %d almocos servidos!\n", diasSemana[pico], almocos[pico]);

    return 0;
}