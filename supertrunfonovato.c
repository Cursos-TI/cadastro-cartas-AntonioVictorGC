#include <stdio.h>

int main() {

/*Carta 1:
Estado: C (Letra inicial do estado escolhido para a carta, exemplo: C para Ceara)
Código: C01 (Inicia-se com a letra do estado representante + numero de 01 a 04 mudando de acordo com a cidade)
Nome da Cidade: Fortaleza
População: 2400000 
Área: 313.8 km²
PIB: 7340000000 (7.34 bilhões)
NPT (Número de Pontos Turísticos): 8*/


char estado1[50], estado2[50], codigo1[50], codigo2[50], nome1[50], nome2[50];
int populacao1, populacao2, NPT1, NPT2;
float area1, area2, PIB1, PIB2;



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

  printf("carta 1:\n estado: %s\n codigo: %s\n nome da cidade: %s\n populacao: %d\n area: %.2f km2\n PIB: %.2f de reais\n numero de pontos turisticos: %d\n", estado1, codigo1, nome1, populacao1, area1, PIB1, NPT1);

 printf("\n");

 printf("carta 2:\n estado: %s\n codigo: %s\n nome da cidade: %s\n populacao: %d\n area: %.2f km2\n PIB: %.2f de reais\n numero de pontos turisticos: %d\n", estado2, codigo2, nome2, populacao2, area2, PIB2, NPT2);

}