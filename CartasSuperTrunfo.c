#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {

    int pontosTuristicos1, pontosTuristicos2;
    float area1, pib1, area2, pib2;
    unsigned long int populacao1, populacao2;
    char nome1[50], nome2[50];
    char estado1[50], estado2[50];
    char codigoCarta1[50], codigoCarta2[50];
    

    // Cadastro das Cartas:
    printf("*** Super truco países!*** \n");

    // Cadastro das cartas do jogador número 1
    printf("Informe os dados da carta número 1: \n");

    printf("Digite o código da primeira carta: \n");
    scanf("%s", &codigoCarta1);

    printf("Digite o nome da cidade da primeira carta: \n");
    scanf("%s", &estado1);

    printf("Digite a população da primeira carta: \n");
    scanf("%lu", &populacao1);

    printf("Digite o número de pontos turísticos da primeira carta: \n");
    scanf("%d", &pontosTuristicos1);

    printf("Digite a área da primeira carta: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta: \n");
    scanf("%f", &pib1);

    // Cadastro das cartas do jogador número 2
    printf("Informe os dados da carta número 2: \n");


    printf("Digite o código da segunda carta: \n");
    scanf("%s", &codigoCarta2);

    printf("Digite o nome da cidade da segunda carta: \n");
    scanf("%s", &estado2);

    printf("Digite a população da segunda carta: \n");
    scanf("%lu", &populacao2);

    printf("Digite o número de pontos turisticos da segunda carta: \n");
    scanf("%d", &pontosTuristicos2);

    printf("Digite a área segunda carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta: \n");
    scanf("%f", &pib2);

    //Operações para calcular a densidade populacional, PIB per capita e super poder 1
    float densidade1 = populacao1 / area1;
    float PIBper1 = pib1 / populacao1;
    float superPoder1 = (float)populacao1 + area1 + pib1 + PIBper1 + densidade1 + (float)pontosTuristicos1;

    //Operações para calcular a densidade populacional, PIB per capita e super poder 2
    float densidade2 = populacao2 / area2;
    float PIBper2 = pib2 / populacao2;
    float superPoder2 = (float) populacao2 + area2 + pib2 + PIBper2 + densidade2 + (float)pontosTuristicos2;

     // Comparação das Cartas:
    printf("Se o resultado for igual a 0, carta 2 é a vencedora\n");
    printf("Se o resultado for igual a 1, carta 1 é a vencedora\n");


    printf("População: %i\n", populacao1 > populacao2);
    printf("Pontos Turisticos: %i\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Área: %i \n", area1 > area2);
    printf("PIB: %i \n", pib1 > pib2);
    printf("Densidade: %i\n",densidade1 < densidade1);
    printf("PIB per Capita: %i\n",PIBper1 > PIBper2);
    printf("Super Poder: %i\n", superPoder1 > superPoder2);

     
     

    return 0;
}
