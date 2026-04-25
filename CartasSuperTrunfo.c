#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

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

  printf("Carta 1:\n");

  printf("Estado:");
  scanf("%c", &estado1);

  printf("Codigo:");
  scanf("%s", codigo1);

  printf("Cidade:");
  scanf("%s", cidade1);

  printf("Populacao:");
  scanf("%d", populacao1);

  printf("Area:");
  scanf("%f", area1);

  printf("Pib:");
  scanf("%f", pib1);

  printf("Pontos:");
  scanf("%d", pontos1);


  // Área para exibição dos dados da cidade

return 0;
} 
