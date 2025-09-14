#include <stdio.h>
#include <stdlib.h>
int main(){

    //CARTA 1
    char estado, estado1;
    char codigo[3], codigo1[3];
    char cidade[30], cidade1[30];
    unsigned long int população, população1;
    float area, area1;
    int PIB, PIB1;
    int pontos, pontos1;
    float densidade, densidade1;
    float percatipa, percapita1;
    percatipa = (float) PIB / população;
    densidade = população / area;
    unsigned long int valorSuperPoder = população + area + PIB + pontos + percatipa + (1/densidade);
    percapita1 = (float) PIB1 / população1;
    densidade1 = população1 / area1;
    unsigned long int valorSuperPoder1 = população1 + area1 + PIB1 + pontos1 + percapita1 + (1/densidade1);
    
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

    int EscolhaDoJogador, EscolhaDoJogador2, EscolhaDoJogador3, EscolhaDoJogador4;

    //MENU
    printf("## MENU ##\n");
    printf("Escolha uma opção:\n");
    printf("1 - Comparar Cartas:\n");
    printf("2 - Fechar o Jogo\n");
    printf("Escolha: ");
    scanf("%d", &EscolhaDoJogador);
    while (EscolhaDoJogador != 1 && EscolhaDoJogador != 2){
        printf("Opção Inválida!\n");
        printf("Insira uma opção correta: ");
        scanf("%d", &EscolhaDoJogador);
    }
    if (EscolhaDoJogador == 1){
        printf("### MENU DE COMPARAÇÃO ###\n");
        printf("- Os atributos não podem ser escolhidos 2x\n");
        printf("Escolha um atributo para comparação:\n");
        printf("1 - Nome do País;\n");
        printf("2 - População;\n");
        printf("3 - Área;\n");
        printf("4 - PIB;\n");
        printf("5 - Pontos Turísticos;\n");
        printf("6 - Densidade Demográfica.\n");
        printf("Escolha 01: ");
        scanf("%d", &EscolhaDoJogador2);
        while (EscolhaDoJogador2 != 1 && EscolhaDoJogador2 != 2 && EscolhaDoJogador2 != 3 && EscolhaDoJogador2 != 4 && EscolhaDoJogador2 != 5 && EscolhaDoJogador2 != 6)
        {
            printf("Opção Inválida!\n");
            printf("Insira uma opção correta: ");
            scanf("%d", &EscolhaDoJogador2);
        }
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
                printf("Empate\n");
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
                printf("Empate\n");
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
                printf("Empate\n");
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
                printf("Empate\n");
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
                printf("Empate\n");
            } else {
                printf("A cidade %s possui menor densidade populacional.\n", cidade1);
                printf("A Carta 2 é vencedora!\n");
            }
            break;
        }
        printf("Escolha outro atributo para comparação:\n");
        printf("1 - Nome do País;\n");
        printf("2 - População;\n");
        printf("3 - Área;\n");
        printf("4 - PIB;\n");
        printf("5 - Pontos Turísticos;\n");
        printf("6 - Densidade Demográfica.\n");
        printf("Escolha 02: ");
        scanf("%d", &EscolhaDoJogador3);
        while (EscolhaDoJogador3 == EscolhaDoJogador2 || EscolhaDoJogador3 != 1 && EscolhaDoJogador3 != 2 && EscolhaDoJogador3 != 3 && EscolhaDoJogador3 != 4 && EscolhaDoJogador3 != 5 && EscolhaDoJogador3 != 6){
            printf("Opção Inválida!\n");
            printf("Insira uma opção correta: ");
            scanf("%d", &EscolhaDoJogador3);
        }
        switch (EscolhaDoJogador3)
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
                printf("Empate\n");
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
                printf("Empate\n");
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
                printf("Empate\n");
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
                printf("Empate\n");
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
                printf("Empate\n");
            } else {
                printf("A cidade %s possui menor densidade populacional.\n", cidade1);
                printf("A Carta 2 é vencedora!\n");
            }
            break;
        }
    }else{
        printf("Obrigado por jogar! Fechando em...\n");
        printf("3\n");
        printf("2\n");
        printf("1\n");
        printf("0\n");
        return 0;
    }
    
   return 0;

}
