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

    printf("Digite o código da Carta 1: ");
    scanf(" %s", carta1.codigo);

    printf("Digite o nome da Cidade: ");
    scanf(" %s", carta1.nomeCidade);

    printf("Digite a população da Cidade: ");
    scanf(" %d", &carta1.populacao);

    printf("Digite o PIB da Cidade: ");
    scanf(" %f", &carta1.pib);

    printf("Digite a Área da Cidade: ");
    scanf(" %f", &carta1.area);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &carta1.numPontosTuristicos);


    return 0;
};
