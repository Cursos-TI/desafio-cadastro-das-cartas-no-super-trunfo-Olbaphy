#include <stdio.h>
int main(){

    //CARTA 1
    char estado;
    char codigo[3];
    char cidade[30];
    int população;
    float area;
    float PIB;
    int pontos;

    printf("CARTA 01:\n");

    printf("Digite o Estado da Cidade:%c\n", estado);
    scanf("%c", &estado);
    
    printf("Digite o Código da Carta:%s\n", codigo);
    scanf("%s", &codigo);
    
    printf("Digite o Nome da Cidade:%s\n", cidade);
    scanf("%s", &cidade);
   
    printf("Digite a População da Cidade:%d\n", população);
    scanf("%d", &população);

    printf("Digite a Área da Cidade(em Km²):%f\n", area);
    scanf("%5f", &area);

    printf("Digite o PIB da Cidade: %f\n", PIB);
    scanf("%10f", &PIB);

    printf("Digite quantos Pontos Turísticos há na Cidade:%d\n", pontos);
    scanf("%d", &pontos);

    //CARTA 1
    printf("Carta 01\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", população);
    printf("Área da Cidade: %5f Km²\n", area);
    printf("PIB: %3f\n", PIB);
    printf("Pontos Turísticos: %d\n", pontos);


     //CARTA 2
    char estado1;
    char codigo1[3];
    char cidade1[30];
    int população1;
    float area1;
    float PIB1;
    int pontos1;

    printf("CARTA 02:\n");
    
    printf("Digite o Estado da Cidade:%s\n", estado1);
    scanf("%s", &estado1);
    
    printf("Digite o Código da Carta:%s\n", codigo1);
    scanf("%s", &codigo1);

    printf("Digite o Nome da Cidade:%s\n", cidade1);
    scanf("%s", &cidade1);
   
    printf("Digite a População da Cidade:%d\n", população1);
    scanf("%d", &população1);

    printf("Digite a Área da Cidade(em Km²):%f\n", area1);
    scanf("%5f", &area);

    printf("Digite o PIB da Cidade: %f\n", PIB1);
    scanf("%10f", &PIB1);

    printf("Digite quantos Pontos Turísticos há na Cidade:%d\n", pontos1);
    scanf("%d", &pontos1);

    //CARTA 2
    printf("Carta 02\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", população1);
    printf("Área da Cidade: %5f Km²\n", area1);
    printf("PIB: %3f\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontos1);

    return 0;
