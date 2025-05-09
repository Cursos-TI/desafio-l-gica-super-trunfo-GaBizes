#include <stdio.h>

int main(){
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
    
    int escolha1, escolha2;

    printf("Escolha dois atributos para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");

    printf("Escolha o primeiro atributo: ");
    scanf("%d", &escolha1);

    printf("Escolha o segundo atributo (diferente do primeiro): ");
    scanf("%d", &escolha2);

    if (escolha2 == escolha1) {
    printf("Erro: O segundo atributo não pode ser igual ao primeiro.\n");
    printf("Escolha um atributo válido: ");
    scanf("%d", &escolha2);
    }
    
    int pontosCidade1 = 0, pontosCidade2 = 0;

 switch (escolha1) {
    case 1: pontosCidade1 += (populacao1 > populacao2); pontosCidade2 += (populacao2 > populacao1);
     break;
    case 2: pontosCidade1 += (area1 > area2); pontosCidade2 += (area2 > area1);
     break;
    case 3: pontosCidade1 += (pib1 > pib2); pontosCidade2 += (pib2 > pib1);
     break;
    case 4: pontosCidade1 += (pontosTuristicos1 > pontosTuristicos2); pontosCidade2 += (pontosTuristicos2 > pontosTuristicos1);
     break;
    case 5: pontosCidade1 += (densidadePopulacional1 < densidadePopulacional2); pontosCidade2 += (densidadePopulacional2 < densidadePopulacional1);
     break; 
    case 6: pontosCidade1 += (pibPerCapita1 > pibPerCapita2); pontosCidade2 += (pibPerCapita2 > pibPerCapita1);
     break;
 }

 switch (escolha2) {
    case 1: pontosCidade1 += (populacao1 > populacao2); pontosCidade2 += (populacao2 > populacao1);
     break;
    case 2: pontosCidade1 += (area1 > area2); pontosCidade2 += (area2 > area1);
     break;
    case 3: pontosCidade1 += (pib1 > pib2); pontosCidade2 += (pib2 > pib1);
     break;
    case 4: pontosCidade1 += (pontosTuristicos1 > pontosTuristicos2); pontosCidade2 += (pontosTuristicos2 > pontosTuristicos1);
     break;
    case 5: pontosCidade1 += (densidadePopulacional1 < densidadePopulacional2); pontosCidade2 += (densidadePopulacional2 < densidadePopulacional1);
     break; 
    case 6: pontosCidade1 += (pibPerCapita1 > pibPerCapita2); pontosCidade2 += (pibPerCapita2 > pibPerCapita1);
     break;
 }

    int somaCidade1 = pontosCidade1;
    int somaCidade2 = pontosCidade2;

    printf("Soma dos atributos:\n");
    printf("%s: %d pontos\n", nomeCidade1, somaCidade1);
    printf("%s: %d pontos\n", nomeCidade2, somaCidade2);

  if (somaCidade1 > somaCidade2) {
    printf("%s venceu!\n", nomeCidade1);
 } else if (somaCidade2 > somaCidade1) {
    printf("%s venceu!\n", nomeCidade2);
 } else {
    printf("Empate!\n");
 }
 
 return 0;

}
