#include <stdio.h>

int main() {
    // Dados da Carta 1 - Serrinha
    char estado1[] = "BA"; 
    char codigo1[] = "A01"; 
    char nomeCidade1[] = "Serrinha"; 
    int populacao1 = 84181; 
    float area1 = 769.700; 
    float pib1 = 1.29; 
    int pontosTuristicos1 = 15; 
    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1; 

    // Dados da Carta 2 - Salvador 
    char estado2[] = "BA"; 
    char codigo2[] = "A02"; 
    char nomeCidade2[] = "Salvador"; 
    int populacao2 = 2884000; 
    float area2 = 693.8; 
    float pib2 = 63.52; 
    int pontosTuristicos2 = 40; 
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2; 

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: %.2f reais\n\n", pibPerCapita1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais\n\n", pibPerCapita2);

    if (populacao1 > populacao2){
        printf("Cidade 1 tem maior população.\n");
    } else{
        printf("Cidade 2 tem maior população.\n");
    } if (area1 > area2){
        printf("Cidade 1 tem maior área.\n");
    } else{
        printf("Cidade 2 tem maior área.\n");
    } if(pib1 > pib2){
        printf("Cidade 1 tem maior PIB.\n");
    } else{
        printf("Cidade 2 tem maior PIB.\n");
    } if (pontosTuristicos1 > pontosTuristicos2){
        printf("Cidade 1 tem maior pontos turísticos.\n");
    } else{
        printf("Cidade 2 tem maior pontos turísticos.\n");
    } if (densidadePopulacional1 > densidadePopulacional2){
        printf("Cidade 1 tem maior densidade populacional.\n");
    } else{
        printf("Cidade 2 tem maior densidade populacional.\n");
    } if (pibPerCapita1 > pibPerCapita2){
        printf("Cidade 1 tem maior PIB per capita.\n");
    } else{
        printf("Cidade 2 tem maior PIB per capita.\n");
    }

    return 0;
}
