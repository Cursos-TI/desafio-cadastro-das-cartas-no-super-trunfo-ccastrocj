#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    // Dados da Carta 1
    char estado1;
    char codigo1 [4];
    char cidade1 [50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1, super_poder1;

    // Dados da Carta 2
    char estado2;
    char codigo2 [4];
    char cidade2 [50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2, super_poder2;

    // Comparações
    int v_populacao, v_area, v_pib, v_pontos_turisticos, v_densidade, v_pib_per_capita, v_super_poder;
    char* vencedor[2] = {"Carta 2 venceu", "Carta 1 venceu"}; 


    // Cadastro das Cartas:
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Bem vindo ao Super Trunfo Nível Mestre!\n");
    printf("\n");
    printf("Cadastro da primeira carta:\n");

    printf("Estado (A a H): ");                 
    scanf(" %c", &estado1);
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
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1); //Cálculo acrescentado no Nível Mestre

    printf("\n");

    printf("Cadastro da segunda carta:\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);                          //Espaço após o as aspas é para não dar erro ao rodar o programa.
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
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2); //Cálculo acrescentado no Nível Mestre

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

    //Comparações
    v_populacao = populacao1 > populacao2;
    v_area = area1 > area2;
    v_pib = pib1 > pib2;
    v_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
    v_densidade = densidade1 < densidade2; // menor vence
    v_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    v_super_poder = super_poder1 > super_poder2;


    //Exibição dos Resultados
    printf("\nComparação entre as Cartas:\n");
    printf("População: %s (%d)\n", vencedor[v_populacao], v_populacao);
    printf("Área: %s (%d)\n", vencedor[v_area], v_area);
    printf("PIB: %s (%d)\n", vencedor[v_pib], v_pib);
    printf("Pontos Turistícos: %s (%d)\n", vencedor[v_pontos_turisticos], v_pontos_turisticos);
    printf("Densidade Populacional: %s (%d)\n", vencedor[v_densidade], v_densidade);
    printf("PIB per Capita: %s (%d)\n", vencedor[v_pib_per_capita], v_pib_per_capita);
    printf("Super Poder: %s (%d)\n", vencedor[v_super_poder], v_super_poder);



    return 0;
}