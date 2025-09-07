#include <stdio.h>
int main(){

    //CARTA 1
    char estado;
    char codigo[3];
    char cidade[30];
    unsigned long int população;
    float area;
    int PIB;
    int pontos;
    float densidade;
    float percatipa;
    
    printf("CARTA 01:\n");

    printf("Digite o Estado da Cidade:%c\n", estado);
    scanf("%c", &estado);
    
    printf("Digite o Código da Carta:%s\n", codigo);
    scanf("%s", &codigo);
    
    printf("Digite o Nome da Cidade:%s\n", cidade);
    scanf("%s", &cidade);
   
    printf("Digite a População da Cidade:%lu\n", população);
    scanf("%lu", &população);

    printf("Digite a Área da Cidade(em Km²):%f\n", area);
    scanf("%f", &area);

    printf("PIB: %d\n", PIB);
    scanf("%d", &PIB);

    printf("Há quantos pontos turísticos: %d\n", pontos);
    scanf("%d", &pontos);

    //CARTA 1
    printf("Carta 01\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %lu habitantes\n", população);
    printf("Área da Cidade: %.2f Km²\n", area);
    printf("PIB (em milhões): R$ %d\n", PIB);
    printf("Pontos Turísticos: %d\n", pontos);
    percatipa = (float) PIB / população;
    printf("PIB per capita: %.2f\n", percatipa);
    densidade = população / area;
    printf("Densidade Populacional: %.2f\n", densidade);
    unsigned long int valorSuperPoder = população + area + PIB + pontos + percatipa + (1/densidade);
    printf("Super Poder: %lu\n", valorSuperPoder);

    //CARTA 2
    char estado1;
    char codigo1[3];
    char cidade1[30];
    unsigned long int população1;
    float area1;
    int PIB1;
    int pontos1;
    float densidade1;
    float percatipa1;
    
    printf("CARTA 02:\n");
    
    printf("Digite o Estado da Cidade:%s\n", cidade1);
    scanf("%s", &cidade1);

    printf("Digite o Código da Carta:%s\n", codigo1);
    scanf("%s", &codigo1);
    
    printf("Digite o Nome da Cidade:%s\n", cidade1);
    scanf("%s", &cidade1);
   
    printf("Digite a População da Cidade:%lu\n", população1);
    scanf("%lu", &população1);

    printf("Digite a Área da Cidade(em Km²):%f\n", area1);
    scanf("%f", &area1);

    printf("PIB: %d\n", PIB1);
    scanf("%d", &PIB1);

    printf("Há quantos pontos turísticos: %d\n", pontos1);
    scanf("%d", &pontos1);

    //CARTA 1
    printf("Carta 01\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", população1);
    printf("Área da Cidade: %.2f Km²\n", area1);
    printf("PIB (em milhões): R$ %d\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontos1);
    percatipa1 = (float) PIB1 / população1;
    printf("PIB per capita: %.2f\n", percatipa1);
    densidade1 = população1 / area1;
    printf("Densidade Populacional: %.2f\n", densidade1);
    unsigned long int valorSuperPoder1 = população1 + area1 + PIB1 + pontos1 + percatipa1 + (1/densidade1);
    printf("Super Poder: %lu\n", valorSuperPoder1);

    printf("COMPARAÇÃO ENTRE AS CARTAS\n");

    if (população > população1){
        printf("População da Carta A é maior que a da Carta B.\n");
    } else {
        printf("População da Carta B é maior que a da Carta A.\n");
    }
    if (area > area1){
        printf("Área da Carta A é maior que a da Carta B.\n");
    } else{
        printf("Área da Carta B é maior que a da Carta A.\n");
    }
     if (PIB > PIB1){
        printf("PIB da Carta A é maior que o da Carta B.\n");
    } else{
        printf("PIB da Carta B é maior que o da Carta A.\n");
    }
     if (pontos > pontos1){
        printf("A Carta A possui mais pontos turísticos que Carta B.\n");
     }else{
        printf("A Carta B possui mais pontos turísticos que Carta A.\n");
     }
     if (percatipa > percatipa1){
        printf("O PIB per capita da Carta A é maior que a da Carta B.\n");
     } else {
        printf("A PIB per capita da Carta B é maior que a da Carta A.\n");
     }
     if (densidade < densidade1){
        printf("A densidade populacional da Carta A é menor que a da Carta B.\n");
     }else{
        printf("A densidade populacional da Carta B é menor que a da Carta A.\n");
     }
     if (valorSuperPoder > valorSuperPoder1){
        printf("o Super Poder da Carta A é maior que a da Carta B.\n");
     }else{
        printf("O Super Poder da Carta B é maior que a da Carta A.\n");
     }

    return 0;

}
