#include <stdio.h>

int main() {
    unsigned long int populacao1, populacao2;
    int pontos_tur1, pontos_tur2;
    float area1, pib1, densidade1, pib_per_capita1, super_poder1;
    float area2, pib2, densidade2, pib_per_capita2, super_poder2;
    char estado1[2], codigo1[4], cidade1[50];
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
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_tur1);

    // Cálculos da primeira carta
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pontos_tur1 + pib_per_capita1 + (1.0 / densidade1);

    // Entrada da segunda carta
    printf("\nDigite os dados da segunda carta\n");

    printf("Digite a letra do estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_tur2);

    // Cálculos da segunda carta
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pontos_tur2 + pib_per_capita2 + (1.0 / densidade2);

    // Saída das cartas
    printf("\n-----------------\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$%.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_tur1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    printf("-----------------\n");

    printf("\n-----------------\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_tur2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    printf("-----------------\n");
printf("\nComparação de Cartas:\n");

if (populacao1 > populacao2)
    printf("População: Carta 1 venceu (1)\n");
else if (populacao1 < populacao2)
    printf("População: Carta 2 venceu (0)\n");
else
    printf("População: Empate (0)\n");

if (area1 > area2)
    printf("Área: Carta 1 venceu (1)\n");
else if (area1 < area2)
    printf("Área: Carta 2 venceu (0)\n");
else
    printf("Área: Empate (0)\n");

if (pib1 > pib2)
    printf("PIB: Carta 1 venceu (1)\n");
else if (pib1 < pib2)
    printf("PIB: Carta 2 venceu (0)\n");
else
    printf("PIB: Empate (0)\n");

if (pontos_tur1 > pontos_tur2)
    printf("Pontos Turísticos: Carta 1 venceu (1)\n");
else if (pontos_tur1 < pontos_tur2)
    printf("Pontos Turísticos: Carta 2 venceu (0)\n");
else
    printf("Pontos Turísticos: Empate (0)\n");

// Para densidade, menor vence!
if (densidade1 < densidade2)
    printf("Densidade Populacional: Carta 1 venceu (1)\n");
else if (densidade1 > densidade2)
    printf("Densidade Populacional: Carta 2 venceu (0)\n");
else
    printf("Densidade Populacional: Empate (0)\n");

if (pib_per_capita1 > pib_per_capita2)
    printf("PIB per Capita: Carta 1 venceu (1)\n");
else if (pib_per_capita1 < pib_per_capita2)
    printf("PIB per Capita: Carta 2 venceu (0)\n");
else
    printf("PIB per Capita: Empate (0)\n");

if (super_poder1 > super_poder2)
    printf("Super Poder: Carta 1 venceu (1)\n");
else if (super_poder1 < super_poder2)
    printf("Super Poder: Carta 2 venceu (0)\n");
else
    printf("Super Poder: Empate (0)\n");
    return 0;
}
