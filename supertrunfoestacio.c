#include <stdio.h>

int main() {

/*Carta 1:
Estado: C (Letra inicial do estado escolhido para a carta, exemplo: C para Ceara)
Código: C01 (Inicia-se com a letra do estado representante + numero de 01 a 04 mudando de acordo com a cidade)
Nome da Cidade: Fortaleza
População: 2400000 
Área: 313.8 km²
PIB: 73400000000
NPT (Número de Pontos Turísticos): 8 
pibpc (PIB per capita): PIB dividido pela população
densipop (Densidade Populacional): População dividida pela área da cidade*/

char estado1[50], estado2[50], codigo1[50], codigo2[50], nome1[50], nome2[50];
int populacao1, populacao2, NPT1, NPT2, comparador, opcao;
float area1, area2, PIB1, PIB2, pibpc1, pibpc2, densipop1, densipop2;

/*conversão de tipos para float
float pibpc1 = (float) PIB1 / populacao1;
float pibpc2 = (float) PIB2 / populacao2;
float densipop1 = (float) populacao1 / area1;
float densipop2 = (float) populacao2 / area2;
estes cálculos foram movidos para depois da entrada dos dados*/

//Entrada dos dados das cartas


printf("Carta 1:\n");
printf("Inicial do Estado (ex: C para Ceara): \n");
scanf("%s", estado1);        
printf("Codigo (ex: C01 ceara, cidade 01 ): \n");
scanf("%s", codigo1);    
printf("Nome da Cidade: \n");
scanf("%s", nome1);
printf("Populacao: \n");
scanf("%d", &populacao1);
printf("Area em km2: \n");
scanf("%f", &area1);
printf("PIB: \n");
scanf("%f", &PIB1);
printf("Numero de Pontos Turisticos: \n");
scanf("%d", &NPT1);

printf("Carta 2:\n");
printf("Inicial do Estado (ex: C para Ceara): \n");
scanf("%s", estado2);        
printf("Codigo (ex: C01 ceara, cidade 01 ): \n");
scanf("%s", codigo2);    
printf("Nome da Cidade: \n");
scanf("%s", nome2);
printf("Populacao: \n");
scanf("%d", &populacao2);
printf("Area: \n");
scanf("%f", &area2);
printf("PIB: \n");
scanf("%f", &PIB2);
printf("Numero de Pontos Turisticos: \n");
scanf("%d", &NPT2);

printf("\n");

//Cálculo de PIB per capita e Densidade Populacional

pibpc1 = (float)PIB1 / populacao1;
pibpc2 = (float)PIB2 / populacao2;
densipop1 = (float)populacao1 / area1;
densipop2 = (float)populacao2 / area2;

//Atribuição dos valores calculados às variáveis correspondentes

//Escolha do atributo para comparar

printf("\n");
printf("Escolha o atributo para comparar:\n");
printf("1 - Populacao\n");
printf("2 - Area\n");
printf("3 - PIB\n");
printf("4 - Numero de Pontos Turisticos\n");
printf("5 - PIB per capita\n");
printf("6 - Densidade Populacional\n");
scanf("%d", &comparador);

//Comparação dos atributos e declaração do vencedor

switch (comparador){
case 1:
    if (populacao1 > populacao2){
        printf("Carta 1 vence com %d habitantes contra %d habitantes da carta 2\n", populacao1, populacao2);
    } else if (populacao2 > populacao1){
        printf("Carta 2 vence com %d habitantes contra %d habitantes da carta 1\n", populacao2, populacao1);
    } else {
        printf("Empate! Ambas as cartas possuem %d habitantes\n", populacao1);
    }
    break;
case 2:
    if (area1 > area2){
        printf("Carta 1 vence com %.2f km2 contra %.2f km2 da carta 2\n", area1, area2);
    } else if (area2 > area1){
        printf("Carta 2 vence com %.2f km2 contra %.2f km2 da carta 1\n", area2, area1);
    } else {
        printf("Empate! Ambas as cartas possuem %.2f km2\n", area1);
    }
    break;
case 3:
    if (PIB1 > PIB2){
        printf("Carta 1 vence com %.2f de reais contra %.2f de reais da carta 2\n", PIB1, PIB2);
    } else if (PIB2 > PIB1){
        printf("Carta 2 vence com %.2f de reais contra %.2f de reais da carta 1\n", PIB2, PIB1);
    } else {
        printf("Empate! Ambas as cartas possuem %.2f de reais\n", PIB1);
    }
    break;
case 4:
    if (NPT1 > NPT2){
        printf("Carta 1 vence com %d pontos turisticos contra %d pontos turisticos da carta 2\n", NPT1, NPT2);
    } else if (NPT2 > NPT1){
        printf("Carta 2 vence com %d pontos turisticos contra %d pontos turisticos da carta 1\n", NPT2, NPT1);
    } else {
        printf("Empate! Ambas as cartas possuem %d pontos turisticos\n", NPT1);
    }
    break;
case 5:
    if (pibpc1 > pibpc2){
        printf("Carta 1 vence com %.2f de reais per capita contra %.2f de reais per capita da carta 2\n", pibpc1, pibpc2);
    } else if (pibpc2 > pibpc1){
        printf("Carta 2 vence com %.2f de reais per capita contra %.2f de reais per capita da carta 1\n", pibpc2, pibpc1);
    } else {
        printf("Empate! Ambas as cartas possuem %.2f de reais per capita\n", pibpc1);
    }
    break;
case 6:
    if (densipop1 < densipop2){
        printf("Carta 1 vence com %.2f habitantes por km2 contra %.2f habitantes por km2 da carta 2\n", densipop1, densipop2);
    } else if (densipop2 < densipop1){
        printf("Carta 2 vence com %.2f habitantes por km2 contra %.2f habitantes por km2 da carta 1\n", densipop2, densipop1);
    } else {
        printf("Empate! Ambas as cartas possuem %.2f habitantes por km2\n", densipop1);
    }
    break;

default:
    printf("Atributo invalido!\n");
    break;
}

printf("\n");

//Menu para exibir as cartas comparadas e suas informações completas

printf("Deseja ver as cartas comparadas e suas informacoes completas?\n");
printf("1 - Sim\n");
printf("2 - Nao\n");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
    printf("essas foram as cartas comparadas:\n");

 printf("carta 1:\n estado: %s\n codigo: %s\n nome da cidade: %s\n populacao: %d\n area: %.2f km2\n PIB: %.2f de reais\n numero de pontos turisticos: %d\n PIB per capita: %.2f\n Densidade populacional: %.2f\n", estado1, codigo1, nome1, populacao1, area1, PIB1, NPT1, pibpc1, densipop1);

 printf("\n");

 printf("carta 2:\n estado: %s\n codigo: %s\n nome da cidade: %s\n populacao: %d\n area: %.2f km2\n PIB: %.2f de reais\n numero de pontos turisticos: %d\n PIB per capita: %.2f\n Densidade populacional: %.2f\n", estado2, codigo2, nome2, populacao2, area2, PIB2, NPT2, pibpc2, densipop2);

    break;
case 2:
    printf("Ok, obrigado por jogar!\n");
    break;

default:
    printf("Opcao invalida!\n");
    break;
}


}

