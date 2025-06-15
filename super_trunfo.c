#include <stdio.h>

// Definição da estrutura da carta
struct Carta
{
    char estado;
    char codigo[4];
    char nomeCidade[100];
    unsigned long int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    float densidadePop;
    float pibPerCapita;
    float superPoder;
};

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
//Função de Cálculo de Densidade Populacional
void calcularDensidadePopulacional(struct Carta *carta){
    carta->densidadePop = carta->populacao / carta->area;
};

//Função de Cálculo do PIB per Capita
void calcularPibPerCapita(struct Carta *carta){
    carta->pibPerCapita = (float) carta->pib / carta->populacao;
};

void calcularSuperPoder(struct Carta *carta){
    float inversoDaDensidadePop = carta->densidadePop / 1.0;
    carta->superPoder = (float)carta->populacao + carta->area + carta->pib + carta->numPontosTuristicos + carta->pibPerCapita + inversoDaDensidadePop;
}

void cadastrarCarta(struct Carta *carta){

    printf("Digite o Estado: ");
    scanf("%c", &carta->estado);
    limparBuffer();

    printf("Digite o codigo da Carta 1: ");
    scanf("%s", carta->codigo);
    limparBuffer();

    printf("Digite o nome da Cidade: ");
    scanf("%[^\n]",carta->nomeCidade);
    limparBuffer();

    printf("Digite a populacao da Cidade: ");
    scanf("%lu", &carta->populacao);
  
    printf("Digite o PIB da Cidade: ");
    scanf("%f", &carta->pib);

    printf("Digite a Area da Cidade: ");
    scanf("%f", &carta->area);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta->numPontosTuristicos);
    limparBuffer();
}

void exibirCarta(struct Carta carta){
    printf("Estado: %c\n", carta.estado);
    printf("Codigo: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("Populacao: %d\n", carta.populacao);
    printf("Area: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta.numPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km² \n", carta.densidadePop);
    printf("PIB per Capita: %.2f reais \n", carta.pibPerCapita);
    printf("Super Poder: %.2f\n", carta.superPoder);
};

int main () {
    //Inicialização das variáveis das Cartas
    struct Carta carta1, carta2;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1\n");
    cadastrarCarta(&carta1);
   
    //Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2\n");
    cadastrarCarta(&carta2);

    //Calculando a Densidade Populacional e PIB per Capita
    calcularDensidadePopulacional(&carta1);
    calcularDensidadePopulacional(&carta2);
    calcularPibPerCapita(&carta1);
    calcularPibPerCapita(&carta2);
    calcularSuperPoder(&carta1);
    calcularSuperPoder(&carta2);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    exibirCarta(carta1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    exibirCarta(carta2);

    return 0;
};
