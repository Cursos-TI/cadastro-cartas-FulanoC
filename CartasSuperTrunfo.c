#include <stdio.h>

int main() {
  // 1. Declarar as variaveis 
    char estado;
    char codigo[20];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

  // 2. PEDIR OS DADOS 
    printf("Digite o estado (letra A a H): \n");
    scanf(" %c", &estado);
    
    printf("Digite o codigo da carta (ex: A01): \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

  // 3. EXIBIR OS DADOS
    printf("Estado: %c\n", estado);
    printf("Codigo da carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turisticos: %d\n", pontos_turisticos);






return 0;
} 
