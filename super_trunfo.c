#include <stdio.h>

// Definição da estrutura da carta
struct Carta
{
    char estado;
    char codigo[4];
    char nomeCidade[100];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
};

int main () {
    //Inicialização das variáveis das Cartas
    struct Carta carta1, carta2;

    //Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1\n");
    printf("Digite o Estado: ");
    scanf(" %c", &carta1.estado);

    printf("Digite o codigo da Carta 1: ");
    scanf(" %s", carta1.codigo);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Digite a populacao da Cidade: ");
    scanf(" %d", &carta1.populacao);

    printf("Digite o PIB da Cidade: ");
    scanf(" %f", &carta1.pib);

    printf("Digite a Area da Cidade: ");
    scanf(" %f", &carta1.area);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &carta1.numPontosTuristicos);

    //Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2\n");
    printf("Digite o Estado: ");
    scanf(" %c", &carta2.estado);

    printf("Digite o codigo da Carta 2: ");
    scanf(" %s", carta2.codigo);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Digite a populacao da Cidade: ");
    scanf(" %d", &carta2.populacao);

    printf("Digite o PIB da Cidade: ");
    scanf(" %f", &carta2.pib);

    printf("Digite a Area da Cidade: ");
    scanf(" %f", &carta2.area);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &carta2.numPontosTuristicos);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f \n", carta1.area);
    printf("PIB: R$ %.2f \n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.numPontosTuristicos);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f \n", carta2.area);
    printf("PIB: R$ %.2f \n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.numPontosTuristicos);

    return 0;
};
