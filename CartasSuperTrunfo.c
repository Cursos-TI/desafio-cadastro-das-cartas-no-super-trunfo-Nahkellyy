#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int pontosturisticos; // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    float area, pib, populacao;// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome[50];

    // Cadastro das Cartas:
    printf("Digite o nome da cidade: \n");// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    scanf("%s", &nome);// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite a população: \n");
    scanf("%f", &populacao);

    printf("Digite os pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    //Operações para calcular a densidade populacional e o PIB per capita
    float densidade = populacao / area;
    float PIBper = pib / populacao;

    // Exibição dos Dados das Cartas:

    printf("Cidade: %s\n" , nome);// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    printf("População: %f\n", populacao);// Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Pontos turísticos: %d\n", pontosturisticos);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("A densidade popilacional é: %f\n", densidade);
    printf("O PIB per capita é: %f\n", PIBper);

    return 0;
}
