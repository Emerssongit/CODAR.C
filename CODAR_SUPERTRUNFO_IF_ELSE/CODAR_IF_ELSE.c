#include <stdio.h>

// Nome das variaveis.

int main() {
    
    char estado[90], estado2[90]; // Variavel com nome estado.
    char codigo[5], codigo2[5];  // Variavel com codigo carta.
    char cidade[90], cidade2[90]; // Variavel com nome da cidade.
    float populacao, populacao2; // Variavel com número da população.
    float area, area2; // variavel, área da cidade.
    float pib, pib2;  // variavel, PIB da cidade.
    int numero, numero2; // Variavel com número de pontos turisticos.

    // Leitura e caputra de dados das cartas.

    printf("Codigo: 1\n");
    printf("De 'A' a 'H' digite a letra de um estado: ");
    scanf(" %s", estado); 

    printf("Codigo da carta: ");
    scanf(" %s", codigo);

    printf("Nome da cidade: ");
    scanf(" %s", cidade);

    printf("População: ");
    scanf(" %f", &populacao);

    printf("Área km²: ");
    scanf(" %f", &area);

    area + populacao;

    printf("PIB: ");
    scanf(" %f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf(" %i", &numero);
     
    // Leitura de dados cadastrados pelo usuarios.

    printf("\nCodigo: 1\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %f\n", populacao);
    printf("Área km²: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %i\n", numero);


    printf("\nSoma de %f e %f é: %.8f\n", populacao, area);

    // Leitura e caputra de dados das cartas.

    printf("\nCarta: 2\n");
    printf("De 'A' a 'H' digite a letra de um estado: ");
    scanf(" %s", estado2);

    printf("Codigo da carta: ");
    scanf(" %s", codigo2);

    printf("Nome da cidade:");
    scanf(" %s", cidade2);

    printf("População: ");
    scanf(" %f", &populacao2);

    printf("Área km²: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf(" %i", &numero2);

    // Leitura de dados cadastrados pelo usuarios.

    printf("\nCarta: 2\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %f\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numero);

    return 0;
}