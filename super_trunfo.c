#include <stdio.h>

// Definição da estrutura da carta
typedef struct
{
    char estado[2];
    char codigo[4];
    char nomeCidade[100];
    unsigned long int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    float densidadePop;
    float pibPerCapita;
    float superPoder;
} Carta;

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

//Função de Cadastro de Carta
void cadastrarCarta(Carta *carta){

    printf("Digite o Estado: ");
    scanf("%s", carta->estado);
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
//Função para cálculo de atributos
void calcularAtributos(Carta *carta){
    carta->densidadePop = carta->populacao / carta->area;

    carta->pibPerCapita = (float) carta->pib / carta->populacao;

    float inversoDaDensidadePop = carta->densidadePop / 1.0;
    carta->superPoder = (float)carta->populacao + 
                                carta->area + 
                                carta->pib + 
                                carta->numPontosTuristicos + 
                                carta->pibPerCapita + 
                                inversoDaDensidadePop;
};
//Função para exibir Carta
void exibirCarta(Carta carta){
    printf("Estado: %s\n", carta.estado);
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
//Função para comparar cartas
int compararAtributos(float carta1, float carta2){
    return carta1 > carta2 ? 1 : 2;

}
//Função que compara todos os atributos
void compararCartas(Carta carta1, Carta carta2){
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu\n", compararAtributos(carta1.populacao, carta2.populacao));
    printf("Área: Carta %d venceu\n", compararAtributos(carta1.area, carta2.area));
    printf("PIB: Carta %d venceu\n", compararAtributos(carta1.pib, carta2.pib));
    printf("Pontos Turísticos: Carta %d venceu\n", compararAtributos(carta1.numPontosTuristicos, carta2.numPontosTuristicos)); 
    printf("Densidade Populacional: Carta %d venceu\n", (compararAtributos(carta1.densidadePop, carta2.densidadePop) == 1 ? 2 : 1));
    printf("PIB per Capita: Carta %d venceu\n", compararAtributos(carta1.pibPerCapita, carta2.pibPerCapita));
    printf("Super Poder: Carta %d venceu\n", compararAtributos(carta1.superPoder, carta2.superPoder));
}

void compararAtributoCartas(Carta carta1, Carta carta2, int opcao) {
    float valor1, valor2;
    const char* nomeAtributo;

    switch (opcao) {
        case 1:
            nomeAtributo = "Populacao";
            valor1 = (float)carta1.populacao;
            valor2 = (float)carta2.populacao;
            break;
        case 2:
            nomeAtributo = "Area";
            valor1 = carta1.area;
            valor2 = carta2.area;
            break;
        case 3:
            nomeAtributo = "PIB";
            valor1 = carta1.pib;
            valor2 = carta2.pib;
            break;
        case 4:
            nomeAtributo = "Pontos Turisticos";
            valor1 = (float)carta1.numPontosTuristicos;
            valor2 = (float)carta2.numPontosTuristicos;
            break;
        case 5:
            nomeAtributo = "Densidade Populacional";
            valor1 = carta1.densidadePop;
            valor2 = carta2.densidadePop;
            break;
        case 6:
            nomeAtributo = "PIB per Capita";
            valor1 = carta1.pibPerCapita;
            valor2 = carta2.pibPerCapita;
            break;
        default:
            printf("Atributo invalido.\n");
            return;
    }

    printf("\nComparacao de cartas (Atributo: %s):\n\n", nomeAtributo);
    printf("Carta 1 - %s (%s): %.2f\n", carta1.nomeCidade, carta1.estado, valor1);
    printf("Carta 2 - %s (%s): %.2f\n", carta2.nomeCidade, carta2.estado, valor2);

    // Regra especial para densidade (quanto menor, melhor)
    if (opcao == 5) {
        if (valor1 < valor2)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        else if (valor2 < valor1)
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        else
            printf("Resultado: Empate!\n");
    } else {
        if (valor1 > valor2)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        else if (valor2 > valor1)
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        else
            printf("Resultado: Empate!\n");
    }
}

int main () {
    
    //Inicialização automática: 
    Carta carta1 = {"A", "A01", "Sao Paulo", 12300000, 1521.0, 230.0, 20};
    Carta carta2 = {"B", "B01", "Rio de Janeiro", 6000000, 1200.0, 190.0, 15};

    int opcao;
    printf("\n--- Menu inicial ---\n");
    printf("Escolha uma um atributo para comparcao:\n");
    printf("1 - Populacao;\n");
    printf("2 - Area;\n");
    printf("3 - PIB;\n");
    printf("4 - Numero de pontos turisticos;\n");
    printf("5 - Densidade demografica;\n");
    scanf("%d", &opcao);

    //Inicialização das variáveis das Cartas de forma dinâmica
    // Carta carta1, carta2;
    // Leitura dos dados da Carta 1
    // printf("Digite os dados da Carta 1\n");
    // cadastrarCarta(&carta1);
    //Leitura dos dados da Carta 2
    // printf("\nDigite os dados da Carta 2\n");
    // cadastrarCarta(&carta2);

    //Calculando os Atributos: Densidade Populacional e PIB per Capita e Super Poder
    calcularAtributos(&carta1);
    calcularAtributos(&carta2);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    exibirCarta(carta1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    exibirCarta(carta2);

    // compararCartas(carta1, carta2);
    compararAtributoCartas(carta1, carta2, opcao);

    return 0;
};
