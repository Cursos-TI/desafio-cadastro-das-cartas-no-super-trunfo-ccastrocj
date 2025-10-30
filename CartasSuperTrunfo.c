#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    // Dados da Carta 1
    char estado1 [3];
    char codigo1 [4];
    char cidade1 [50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1;

    // Dados da Carta 2
    char estado2[3];
    char codigo2 [4];
    char cidade2 [50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2;
 


    // Cadastro das Cartas:
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Bem vindo ao Super Trunfo Nível Mestre!\n");
    printf("\n");
    printf("Cadastro da primeira carta:\n");

    printf("Estado (ex: SP): ");                 
    scanf(" %s", &estado1);
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em Km²): ");
    scanf(" %f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    //Cálculo da primeira carta
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    
    printf("\n");

    printf("Cadastro da segunda carta:\n");

    printf("Estado (ex: SP): ");
    scanf(" %s", &estado2);                          //Espaço após o as aspas é para não dar erro ao rodar o programa.
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    //Cálculo da segunda carta
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    
    printf("\n");


    // Exibição dos Dados das Cartas:

    printf("Cidade 1\n");
    printf("Estado: %c\n", estado1);                   
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);

    printf("\n");       //Coloquei esses espaços para ficar com uma visibilidade melhor ao rodar o programa.

    printf("Cidade 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);

    printf("\n");

    //Exibição do Resultado de Comparação das Cartas
    printf("Carta 1 - %s (%s): PIB per capita = %.2f reais\n", cidade1, estado1, pib_per_capita1);
    printf("Carta 2 - %s (%s): PIB per capita = %.2f reais\n", cidade2, estado2, pib_per_capita2);

    //Comparação usando if-else
    printf("\nComparação de cartas (Atributo: PIB per capita):\n");

    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
      } else if (pib_per_capita2 > pib_per_capita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
      } else {
        printf("Resultado: Empate!\n");
      }


    return 0;
}