#include <stdio.h>
#include <stdlib.h>
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
    percatipa = (float) PIB / população;
    densidade = população / area;
    unsigned long int valorSuperPoder = população + area + PIB + pontos + percatipa + (1/densidade);

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
    percatipa1 = (float) PIB1 / população1;
    densidade1 = população1 / area1;
    unsigned long int valorSuperPoder1 = população1 + area1 + PIB1 + pontos1 + percatipa1 + (1/densidade1);
    
    printf("### BEM-VINDO AO SUPERTRUNFO ###\n");
    printf("Insira os Dados das Cartas:\n");
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

    printf("CARTA 02:\n");
    
    printf("Digite o Estado da Cidade:%s\n", estado1);
    scanf("%s", &estado1);

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


    int EscolhaDoJogador, EscolhaDoJogador2;

    //CARTA 1
    printf("## MENU ##\n");
    printf("Escolha uma opção:\n");
    printf("1 - Comparar Cartas:\n");
    printf("2 - Fechar o Jogo\n");
    printf("Escolha: ");
    scanf("%d", &EscolhaDoJogador);

    switch (EscolhaDoJogador)
    {
    case 1:
    printf("Escolha o atributo de comparação:\n");
    printf("1 - Nome do País;\n");
    printf("2 - População;\n");
    printf("3 - Área;\n");
    printf("4 - PIB;\n");
    printf("5 - Pontos Turísticos;\n");
    printf("6 - Densidade Demográfica.\n");
    scanf("%d", &EscolhaDoJogador2);

        switch (EscolhaDoJogador2)
        {
        case 1:
            printf("Nome das 1ª Cidade: %s\n", cidade);
            printf("Nome da 2ª Cidade: %s\n", cidade1);
            break;

        case 2:
            if(população > população1){
                printf("A população da cidade %s é maior.\n", cidade);
                printf("A Carta 1 é vencedora!\n");
            } else if (população == população1){
                printf("Ambas possuem a mesma quantidade de população.\n");
            } else {
                printf("A população da cidade %s é maior.\n", cidade1);
                printf("A Carta 2 é vencedora!\n");
            }
            break;
        case 3:
            if(area > area1){
                printf("A área da cidade %s é maior.\n", cidade);
                printf("A Carta 1 é vencedora!\n");
            } else if (area == area1){
                printf("Ambas possuem a mesma área.\n");
            } else {
                printf("A área da cidade %s é maior.\n", cidade1);
                printf("A Carta 2 é vencedora!\n");
            }
            break;
        case 4:
            if(PIB > PIB1){
                printf("O PIB da cidade %s é maior.\n", cidade);
                printf("A Carta 1 é vencedora!\n");
            } else if (PIB == PIB1){
                printf("Ambas possuem o mesmo PIB.\n");
            } else {
                printf("O PIB da cidade %s é maior.\n", cidade1);
                printf("A Carta 2 é vencedora!\n");
            }
            break;
        case 5:
            if(pontos > pontos1){
                printf("A cidade %s possui mais pontos turísticos.\n", cidade);
                printf("A Carta 1 é vencedora!\n");
            } else if (pontos == pontos1){
                printf("Ambas possuem o mesmo número de pontos turísticos.\n");
            } else {
                printf("A cidade %s possui mais pontos turísticos.\n", cidade1);
                printf("A Carta 2 é vencedora!\n");
            }
            break;
        case 6:
            if(densidade < densidade1){
                printf("A cidade %s possui menor densidade populacional.\n", cidade);
                printf("A Carta 1 é vencedora!\n");
            } else if (pontos == pontos1){
                printf("Ambas possuem a mesma densidade populacional.\n");
            } else {
                printf("A cidade %s possui menor densidade populacional.\n", cidade1);
                printf("A Carta 2 é vencedora!\n");
            }
            break;
        default:
            printf("Escolha Inválida!\n");
            break;
        }
        break;
    case 2:
        printf("Obrigado por jogar!\n");
        break;
    default:
    printf("Escolha Inválida!\n");
        break;
    }

   return 0;
}
