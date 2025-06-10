#include <stdio.h>
 
int main() {
    int populacao, pontos_tur;
    float area, pib;
    char estado[2], codigo[4], cidade[50];
    
    printf("Digite os dados da primeira carta");
        
    printf("Digite a letra do estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);
    
    printf("Digite a área da cidade: \n");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_tur);
    
    
    printf("\n\n\n-----------------", pontos_tur);        
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("-----------------\n\n\n", pontos_tur);

    printf("Digite os dados da segunda carta");
        
    printf("Digite a letra do estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);
    
    printf("Digite a área da cidade: \n");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_tur);
    
    
    printf("\n\n\n-----------------", pontos_tur);        
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("-----------------\n\n\n", pontos_tur);

    return 0;
}