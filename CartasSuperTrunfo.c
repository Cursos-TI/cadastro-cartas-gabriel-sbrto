#include <stdio.h>

int main() {
//variaveis para as cartas 1 e 2
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1, pib1;
  int pontos1;

  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2, pib2;
  int pontos2;

  //leitura de carta 1

  printf("Digite o Estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Digite o Codigo (ex: A01): ");
  scanf("%s", codigo1);

  printf("Nome da Cidade: ");
  scanf("%s", cidade1);

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area (Km2): ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);
  
  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontos1);

  printf("\n");

  // leitura de carta 2

  printf("Digite o Estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Digite o Codigo: ");
  scanf("%s", &codigo2);

  printf("Nome da Cidade: ");
  scanf("%s", &cidade2);

  printf("Populacao: ");
  scanf("%d", &populacao2);

  printf("Area (Km2): ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontos2); 

  // exibicao de dados carta 1

  printf("Carta 1: \n");
  printf("\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("Populacao: %d habitantes\n", populacao1);
  printf("Area (Km2): %.2f\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Pontos Turisticos: %d\n", pontos1);

  printf("\n");

  // exibicao de dados carta 2

  printf("Carta 2: \n");
  printf("\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %d habitantes\n", populacao2);
  printf("Area (Km2): %.2f\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Pontos Turisticos: %d\n", pontos2);




} 
