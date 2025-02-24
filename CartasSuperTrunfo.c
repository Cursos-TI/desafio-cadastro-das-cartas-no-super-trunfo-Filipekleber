#include <stdio.h>

int main(){


char estado;
char idCidade[5];
char nomeCidade[50];
int populacao;
double area;
double pib;
int pontosTuristicos;

//----------------------------------------------------------------------------------------------

printf("Seja bem vindo ao jogo super trunfo!!\n\n");
printf("\nVamos dar inicio ao jogo\n");


printf("Qual o estado da carta?");
scanf(" %c", &estado);


printf("Qual sera o codigo dela? ");
scanf(" %s", &idCidade);

getchar();

printf("Qual o nome da cidade que voce deseja cadastrar? ");
fgets(nomeCidade, 50, stdin);


printf("Qual a população da sua cidade?");
scanf(" %d", &populacao);


printf("Qual e a area da sua cidade?");
scanf(" %lf", &area);


printf("Qual e o pib da sua cidade?");
scanf(" %lf", &pib);


printf("Quantos pontos turisticos sua cidade tem?");
scanf(" %d", &pontosTuristicos);

double densidadePopulacional = populacao / area;
double pibPerCapita = pib / populacao;

printf("Estado: %c\n", estado);
printf("O id da sua cidade e: %s\n", idCidade);
printf("O nome da sua cidade e: %s\n", nomeCidade);
printf("A populacao da sua cidade e: %d\n", populacao);
printf("A area da sua cidade e: %.2f\n", area);
printf("o pib da sua cidade e: %.2f\n" , pib);
printf("O numero de pontos turisticos: %d\n", pontosTuristicos);
printf("A densidade populacional da cidade: %s e de: %.2f\n", nomeCidade, densidadePopulacional);
printf("O pib per capita da cidade: %s e de: %.2f\n", nomeCidade, pibPerCapita);

return 0;

}
