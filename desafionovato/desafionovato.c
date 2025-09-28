#include <stdio.h>

int main(){

    char letraestado01, letraestado02;
    char codigo01[10], codigo02[10];
    char cidade01[50], cidade02[50];
    int habitantes01, habitantes02;
    float area01, area02;
    float pib01, pib02;
    int turisticos01, turisticos02;

    printf("Digite a primeira letra do estado - Carta 01: ");
    scanf("%c", &letraestado01);
    printf("Digite a primeira letra do estado escolhido seguido de uma numeração de 01 a 04: ");
    scanf("%s", &codigo01); 
    printf("Escreva o nome da cidade: ");
    scanf("%s", &cidade01);
    printf("Digite aqui o número de habitantes da cidade: ");
    scanf("%d", &habitantes01);
    printf("Digite a área em quilômetros quadrados da cidade escolhida: ");
    scanf("%f", &area01);
    printf("Digite o PIB (Produto Interno Bruto): ");
    scanf("%f", &pib01);
    printf("Por fim, digite o número de pontos turísticos da cidade: ");
    scanf("%d", &turisticos01);
    

    printf("Digite a primeira letra do estado - Carta 02: ");
    scanf("%c", &letraestado02);   
    printf("Digite a primeira letra do estado escolhido seguido de uma numeração de 01 a 04: ");
    scanf("%s", &codigo02);
    printf("Escreva o nome da cidade: ");
    scanf("%s", &cidade02);
    printf("Digite aqui o número de habitantes da cidade: ");
    scanf("%d", &habitantes02);
    printf("Digite a área em quilômetros quadrados da cidade escolhida: ");
    scanf("%f", &area02);
    printf("Digite o PIB (Produto Interno Bruto): ");
    scanf("%f", &pib02);
    printf("Por fim, digite o número de pontos turísticos da cidade: ");
    scanf("%d", &turisticos02);
    
    printf("Carta 01:\n");
    printf("Estado: %c\n", letraestado01);
    printf("Código: %s\n", codigo01);
    printf("Nome da cidade: %s\n", cidade01);
    printf("População: %d\n", habitantes01);
    printf("Área: %f\n", area01);
    printf("PIB: %.2lf\n", pib01);
    printf("Números de pontos turísticos: %d\n", turisticos01);

    printf("Carta 02:\n");
    printf("Estado: %c\n", letraestado02);
    printf("Código: %s\n", codigo02);
    printf("Nome da cidade: %s\n", cidade02);
    printf("População: %d\n", habitantes02);
    printf("Área: %f\n", area02);
    printf("PIB: %.2lf\n", pib02);
    printf("Números de pontos turísticos: %d\n", turisticos02);






}
