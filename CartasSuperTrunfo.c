int main() {
    char cidadeNome[100];
    char idCidade[10];

    int populacao;
    double Area;
    double pib;
    int numeroTuristicos;

    printf("Qual o nome da cidade que voce deseja cadastrar? ");
    scanf(" %99s", cidadeNome);

    printf("Qual o codigo que voce deseja colocar? ");
    scanf(" %9s", idCidade);

    printf("Me fale o tamanho da populacao da sua cidade: ");
    scanf(" %d", &populacao);

    printf("Quantos quilometros quadrados sua cidade tem? ");
    scanf(" %lf", &Area);

    printf("Qual o PIB da sua cidade? ");
    scanf(" %lf", &pib);

    printf("Qual a quantidade de turistas por ano na sua cidade? ");
    scanf(" %d", &numeroTuristicos);

    printf("\nAqui estão as informacoes da sua carta:\n");
    printf("Cidade: %s\n", cidadeNome);
    printf("Codigo: %s\n", idCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2lf km²\n", Area);
    printf("PIB: %.2lf\n", pib);
    printf("Numero de turistas: %d\n", numeroTuristicos);

    return 0;
}