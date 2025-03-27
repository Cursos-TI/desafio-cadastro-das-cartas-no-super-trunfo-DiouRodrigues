//Todo printf Sera uma mensagem com informações sobre a partida como de quem é a vez ,ou mensagem dizendo oque deve ser digitado.
//Na montagem das cartas ira conter os dados preenchidos pelos jogadores.
//Nova função adicionada, agr o código calcula a densidade populacional e o pib per capita ***ATUALIZADO DIA 26/03/2025***.

//INICIO DO CODIGO
#include <stdio.h>

int main (){
    // Variaveis da carta 1
    char carta1[4];
    char estado1[4];
    char codigo1[20] ;
    char cidade1[20] ;
    int populacao1;
    float area1;
    float pib1;
    int NumeroDePontosTuristicos1;
    float densidadePopulacional1;//AQUI O CODIGO FAZ A DIVISÃO DA POPULAÇÃO PELA AREA
    float pibPerCapita1;//AQUI O CODIGO FAZ A DIVISÃO DO PIB PELA POPULAÇÃO

    // Variaveis da carta 2
    char carta2[4];
    char estado2[4];
    char codigo2[20] ;
    char cidade2[20] ;
    int populacao2;
    float area2;
    float pib2;
    int NumeroDePontosTuristicos2;
    float densidadePopulacional2;//AQUI O CODIGO FAZ A DIVISÃO DA POPULAÇÃO PELA AREA
    float pibPerCapita2;//AQUI O CODIGO FAZ A DIVISÃO DO PIB PELA POPULAÇÃO

//MONTAGEM DA CARTA DO JOGADOR NUMERO 1

printf("****JOGO SUPER TRUNFO****\n\n");

    printf("Jogador 1 é a sua vez\n\n");
printf("JOGADOR 01 \n digite o numero da sua carta: \n");
scanf("%s",carta1);

printf("JOGADOR 01 \n digite o estado da sua carta: \n");
scanf("%s",estado1);

printf("JOGADOR 01 \n digite o código da sua carta: \n");
scanf("%s",codigo1);

printf("JOGADOR 01 \n digite a cidade da sua carta: \n");
scanf("%s",cidade1);

printf("JOGADOR 01 \n digite o numero de Habitantes da cidade em sua carta: \n");
scanf("%i",&populacao1);

printf("JOGADOR 01 \n digite o tamanho da cidade em sua carta: \n");
scanf("%f",&area1 );

printf("JOGADOR 01 \n digite o pib da cidade em sua carta: \n");
scanf("%f",&pib1);

printf("JOGADOR 01 \n digite o numero de pontos turisticos na cidade em sua carta: \n");
scanf("%i",&NumeroDePontosTuristicos1);

densidadePopulacional1 = (float)populacao1 / area1;
pibPerCapita1 = (float)pib1 / populacao1;

printf("Agora é a vez do JOGADOR 2\n\n");//Texto informando que é a vez do proximo jogador

//MONTAGEM DA CARTA DO JOGADOR NUMERO 2

printf("JOGADOR 02 \n digite o numero da sua carta: \n");
scanf("%s",carta2);

printf("JOGADOR 02 \n digite o estado da sua carta: \n");
scanf("%s",estado2);

printf("JOGADOR 02 \n digite o código da sua carta: \n");
scanf("%s",codigo2);

printf("JOGADOR 02 \n digite a cidade da sua carta: \n");
scanf("%s",cidade2);

printf("JOGADOR 02 \n digite o numero de Habitantes da cidade em sua carta: \n");
scanf("%i",&populacao2);

printf("JOGADOR 02 \n digite o tamanho da cidade em sua carta: \n");
scanf("%f",&area2 );

printf("JOGADOR 02 \n digite o pib da cidade em sua carta: \n");
scanf("%f",&pib2);

printf("JOGADOR 02 \n digite o numero de pontos turisticos na cidade em sua carta: \n");
scanf("%i",&NumeroDePontosTuristicos2);
densidadePopulacional2 = (float)populacao2 / area2;
pibPerCapita2 = (float)pib2 / populacao2;

printf("****COMPARAÇÃO ENTRE AS CARTAS****\n\n");

printf("CARTA DO JOGADOR 01 \n\nCARTA: %s\nEstado:%s\nCódigo:%s\nCidade: %s\nPopulação:%i\nArea: %.2f Km²\nPib: %.2f bilhões de reais\nNumero de pontos turisticos:%i\nDensidade populacional: %.2f hab/Km²\nPib per capita: %.2f reais\n\n",carta1,estado1,codigo1,cidade1,populacao1,area1,pib1,NumeroDePontosTuristicos1,densidadePopulacional1,pibPerCapita1);

printf("CARTA DO JOGADOR 02 \n\nCARTA: %s\nEstado:%s\nCódigo:%s\nCidade: %s\nPopulação:%i\nArea: %.2f Km²\nPib: %.2f bilhões de reais\nNumero de pontos turisticos:%i\nDensidade populacional: %.2f hab/Km²\nPib per capita: %.2f reais\n\n",carta2,estado2,codigo2,cidade2,populacao2,area2,pib2,NumeroDePontosTuristicos2,densidadePopulacional2,pibPerCapita2);
}

//FIM DO CODIGO