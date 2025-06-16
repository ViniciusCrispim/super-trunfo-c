# 🃏 Super Trunfo em C

Um jogo de cartas estilo *Super Trunfo*, desenvolvido em linguagem C, com foco em prática de estruturas (`struct`), ponteiros, cálculos de atributos e comparações entre cartas.









## 📋 Funcionalidades

- Cadastro de duas cartas com atributos como:
  - Estado, código e nome da cidade
  - População, área, PIB e número de pontos turísticos
- Cálculo automático de:
  - Densidade populacional
  - PIB per capita
  - Super Poder (pontuação total baseada nos atributos)
- Comparação entre cartas:
  - Atributo por atributo
  - Densidade: menor vence
  - Outros atributos: maior vence
- Exibição do vencedor por atributo
## 📊 Super Poder

O "Super Poder" é calculado somando:

- População
- Área
- PIB
- Número de pontos turísticos
- PIB per capita
- Inverso da densidade populacional (quanto menor a densidade, maior o poder)
## 🛠️ Tecnologias

- Linguagem C
- Compilador: GCC ou compatível
- Compatível com Windows/Linux
## ▶️ Como Executar

1. Compile com:

```bash
gcc super_trunfo.c -o super_trunfo 
```

2. Execute: 
```bash
./super_trunfo
```


## 📌 Aprendizados
Este projeto reforça os seguintes conceitos fundamentais em C:

Manipulação de struct

Uso de ponteiros e passagem por referência

Boas práticas de modularização (funções separadas para cálculo e exibição)

Cálculos com conversão de tipos

Operadores relacionais e condicionais

Legibilidade e clareza na estrutura do código
