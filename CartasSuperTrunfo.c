#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo:int No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

 int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1, estado2;
  char codigo1[4], codigo2[4];
  char cidade1[50], cidade2[50];
  int populacao1, populacao2;
  int pontos1, pontos2;
  float area1, area2;
  float pib1, pib2;

  // Área para entrada de dados

  printf("Carta 1\n");

  printf("Estado:");
  scanf(" %c", &estado1);

  printf("Codigo:");
  scanf("%s", codigo1);

  printf("Cidade:");
  scanf("%s", cidade1);

  printf("Populacao:");
  scanf("%d", &populacao1);

  printf("Area:");
  scanf("%f", &area1);

  printf("Pib:");
  scanf("%f", &pib1);

  printf("Pontos:");
  scanf("%d", &pontos1);

  printf("Carta 2\n");

  printf("Estado:");
  scanf(" %c", &estado2);

  printf("Codigo:");
  scanf("%s", codigo2);

  printf("Cidade:");
  scanf("%s", cidade2);

  printf("Populacao:");
  scanf("%d", &populacao2);

  printf("Area:");
  scanf("%f", &area2);

  printf("Pib:");
  scanf("%f", &pib2);

  printf("Pontos:");
  scanf("%d", &pontos2);


  // Área para exibição dos dados da cidade


printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %.2f\n", area1);
printf("Pib: %.2f\n", pib1);
printf("Pontos: %d\n", pontos1);

printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f\n", area2);
printf("Pib: %.2f\n", pib2);
printf("Pontos: %d\n", pontos2);

return 0;
} 
