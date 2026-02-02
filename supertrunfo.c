#include <stdio.h>

typedef struct {
    char estado[3];
    char codigo[5];
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
} Carta;

int main() {
    Carta carta1 = {
        "SP", "C1", "Sao Paulo",
        12300000,     
        1521.0,     
        699000.0,     
        15,           
        0.0, 0.0, 0.0
    };

    Carta carta2 = {
        "RJ", "C2", "Rio de Janeiro",
        6700000,      
        1200.0,      
        450000.0,     
        30,           
        0.0, 0.0, 0.0
    };

    // Calculos da carta 1
    carta1.densidadePopulacional = (float)carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / (float)carta1.populacao;
    carta1.superPoder = (float)carta1.populacao + carta1.area + carta1.pib +
                        carta1.pontosTuristicos + carta1.pibPerCapita +
                        (1 / carta1.densidadePopulacional);

    // Calculos da carta 2
    carta2.densidadePopulacional = (float)carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / (float)carta2.populacao;
    carta2.superPoder = (float)carta2.populacao + carta2.area + carta2.pib +
                        carta2.pontosTuristicos + carta2.pibPerCapita +
                        (1 / carta2.densidadePopulacional);

    // Exibicao das cartas
    printf("===== CARTAS =====\n\n");

    printf("--- Carta 1 ---\n");
    printf("Nome: %s\n", carta1.nome);
    printf("Populacao: %lu\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %.6f\n", carta1.pibPerCapita);
    printf("Super Poder: %.2f\n\n", carta1.superPoder);

    printf("--- Carta 2 ---\n");
    printf("Nome: %s\n", carta2.nome);
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %.6f\n", carta2.pibPerCapita);
    printf("Super Poder: %.2f\n\n", carta2.superPoder);

    // Comparacoes
    printf("===== COMPARACAO DE CARTAS =====\n\n");

    if (carta1.populacao > carta2.populacao)
        printf("Populacao: Carta 1 venceu (1)\n");
    else
        printf("Populacao: Carta 2 venceu (0)\n");

    if (carta1.area > carta2.area)
        printf("Area: Carta 1 venceu (1)\n");
    else
        printf("Area: Carta 2 venceu (0)\n");

    if (carta1.pib > carta2.pib)
        printf("PIB: Carta 1 venceu (1)\n");
    else
        printf("PIB: Carta 2 venceu (0)\n");

    if (carta1.pontosTuristicos > carta2.pontosTuristicos)
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    else
        printf("Pontos Turisticos: Carta 2 venceu (0)\n");

    if (carta1.densidadePopulacional < carta2.densidadePopulacional)
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    else
        printf("Densidade Populacional: Carta 2 venceu (0)\n");

    if (carta1.pibPerCapita > carta2.pibPerCapita)
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    else
        printf("PIB per Capita: Carta 2 venceu (0)\n");

    if (carta1.superPoder > carta2.superPoder)
        printf("Super Poder: Carta 1 venceu (1)\n");
    else
        printf("Super Poder: Carta 2 venceu (0)\n");

    return 0;
}