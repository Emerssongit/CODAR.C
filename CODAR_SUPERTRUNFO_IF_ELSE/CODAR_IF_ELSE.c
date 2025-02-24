#include <stdio.h>

// Nome das variaveis.

int main() {
    
    char estado1[90], estado2[90]; // Variavel com nome estado.
    char codigo1[4], codigo2[5];  // Variavel com codigo carta.
    char cidade1[90], cidade2[90]; // Variavel com nome da cidade.
    int populacao1, populacao2; // Variavel com número da população.
    float area1, area2; // variavel, área da cidade.
    float pib1, pib2;  // variavel, PIB da cidade.
    int numero1, numero2; // Variavel com número de pontos turisticos.
    float densidade1, densidade2; // Calculo do população e área.
    float pib_percapita1, pib_percapita2; // calculo do pib e populaçãp.

    // Leitura e caputra de dados das cartas.

    printf(" \n**********CARTA SUPERTRUNFO**********\n ");

    printf("\nCARTA: 1.\n");
    printf("De 'A' a 'H' digite a letra de um estado: ");
    scanf(" %s", &estado1); 

    printf("Codigo da carta: ");
    scanf(" %s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %s", cidade1);

    printf("População: ");
    scanf(" %d", &populacao1);

    printf("Área km²: ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf(" %f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %i", &numero1);

    densidade1 = populacao1 / area1;
    pib_percapita1 = pib1 / populacao1;


     // Leitura de dados cadastrados pelo usuarios.

    printf("\nCARTA: 1. \n");
    printf("Estado: %s \n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área km²: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %i\n", numero1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.8f\n", pib_percapita1);

    // Leitura e caputra de dados das cartas.

    printf("\nCARTA: 2. \n");
    printf("De 'A' a 'H' digite a letra de um estado: ");
    scanf(" %s", estado2);

    printf("Codigo da carta: ");
    scanf(" %s", codigo2);

    printf("Nome da cidade:");
    scanf(" %s", cidade2);

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área km²: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf(" %i", &numero2);

    densidade2 = populacao2 / area2;
    pib_percapita2 = pib2 / populacao2;

    // Leitura de dados cadastrados pelo usuarios.

    printf("\nCarta: 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.8f\n", pib_percapita2);

    // Comparação das cartas.

    printf("\nCOMPARAÇÃO DE CARTAS (ÁREA)\n"),
    printf("Carta: 1 %s ( %s ): %f\n", cidade1, estado1, area1);
    printf("Carta: 2 %s ( %s ): %f\n", cidade2, estado2, area2);


    return 0;
}