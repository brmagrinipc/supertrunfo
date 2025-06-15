#include <stdio.h>

int main() {
    int populacao1, pontos_tur1;
    float area1, pib1, densidade1, pib_per_capita1;
    char estado1[2], codigo1[4], cidade1[50];

    int populacao2, pontos_tur2;
    float area2, pib2, densidade2, pib_per_capita2;
    char estado2[2], codigo2[4], cidade2[50];

    // Entrada da primeira carta
    printf("Digite os dados da primeira carta \n");

    printf("Digite a letra do estado: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_tur1);

    // Cálculos da primeira carta
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Saída da primeira carta
    printf("\n-----------------\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$%.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_tur1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("-----------------\n");

    // Entrada da segunda carta
    printf("\nDigite os dados da segunda carta\n");

    printf("Digite a letra do estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_tur2);

    // Cálculos da segunda carta
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Saída da segunda carta
    printf("\n-----------------\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$%.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_tur2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("-----------------\n");

    return 0;
}
