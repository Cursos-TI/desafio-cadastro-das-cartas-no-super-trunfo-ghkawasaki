#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Gustavo

int main() {
   
    char Estado1;
    char Codigo1[4];
    char NomeCidade1[50];
    unsigned long int Populacao1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;
    float Densidade1;
    float PibPercapita1;
    float SuperPoder1;

    char Estado2;
    char Codigo2[4];
    char NomeCidade2[50];
    unsigned long int Populacao2;
    float Area2;
    float Pib2;
    int PontosTuristicos2;
    float Densidade2;
    float PibPercapita2;
    float SuperPoder2;

    printf("\nCadastro da Carta 1:\n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &Estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", NomeCidade1);

    printf("Digite a população: ");
    scanf("%lu", &Populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &Area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &Pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    Densidade1 = Populacao1 / Area1;
    PibPercapita1 = (Pib1 * 1000000000) / Populacao1;
    SuperPoder1 = (float) Populacao1 + Area1 + (Pib1 * 1000000000) + PontosTuristicos1 + PibPercapita1 + (1.0 / Densidade1);

    printf("\nCadastro da Carta 2:\n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &Estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", NomeCidade2);

    printf("Digite a população: ");
    scanf("%lu", &Populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &Area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &Pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    Densidade2 = Populacao2 / Area2;
    PibPercapita2 = (Pib2 * 1000000000) / Populacao2;
    SuperPoder2 = (float) Populacao2 + Area2 + (Pib2 * 1000000000) + PontosTuristicos2 + PibPercapita2 + (1.0 / Densidade2);

    printf("\nCarta1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %lu\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", Pib1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB per Capita: R$ %.2f\n", PibPercapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", Pib2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per Capita: R$ %.2f\n", PibPercapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", Populacao1 > Populacao2);
    printf("Área: Carta 1 venceu (%d)\n", Area1 > Area2);
    printf("PIB: Carta 1 venceu (%d)\n", Pib1 > Pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", PontosTuristicos1 > PontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", Densidade1 < Densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PibPercapita1 > PibPercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);

    return 0;    

}