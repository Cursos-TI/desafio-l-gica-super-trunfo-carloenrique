#include <stdio.h> // se ficar chato os comentarios, eu tiro nos proximos trabalhos e só para não me perder.

// Desafio Super Trunfo - Países
// Código Nível Mestre, com comparação de dois atributos e lógica avançada

int main() {
    // Declaração das variáveis para armazenar as informações das duas cidades
    char estado1, estado2; // Armazena a sigla do estado
    char codigo1[5], codigo2[5]; // Código de identificação da cidade
    char nome1[50], nome2[50]; // Nome da cidade
    int populacao1, populacao2; // População total
    float area1, area2; // Área territorial em km²
    float pib1, pib2; // Produto Interno Bruto em bilhões
    int pontos1, pontos2; // Número de pontos turísticos
    float densidade1, densidade2; // Densidade populacional (hab/km²)
    float pib_per_capita1, pib_per_capita2; // PIB per capita (em reais)
    int atributo1, atributo2; // Atributos escolhidos para comparação

    // Cadastro das informações da primeira cidade
    printf("Digite a informação da 1ª Cidade:\n");
    printf("Estado (letra única): ");
    scanf(" %c", &estado1); // Lê o estado (ex: 'S' para São Paulo)
    printf("Código (até 4 caracteres): ");
    scanf("%s", codigo1); // Lê o código da cidade
    printf("Nome (sem espaços): ");
    scanf("%s", nome1); // Lê o nome da cidade
    printf("População: ");
    scanf("%d", &populacao1); // Lê o número de habitantes
    printf("Área (em km²): ");
    scanf("%f", &area1); // Lê a área em quilômetros quadrados
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1); // Lê o PIB
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1); // Lê a quantidade de pontos turísticos

    // Cadastro das informações da segunda cidade
    printf("\nDigite a informação da 2ª Cidade:\n");
    printf("Estado (letra única): ");
    scanf(" %c", &estado2);
    printf("Código (até 4 caracteres): ");
    scanf("%s", codigo2);
    printf("Nome (sem espaços): ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculo automático da densidade populacional e PIB per capita
    densidade1 = populacao1 / area1; // Densidade = População / Área
    densidade2 = populacao2 / area2;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1; // PIB per capita = PIB em reais / População
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Menu dinâmico para escolha dos atributos
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    scanf("%d", &atributo1); // Lê o primeiro atributo escolhido

    printf("\nEscolha o segundo atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    scanf("%d", &atributo2); // Lê o segundo atributo escolhido

    // Exibição informativa para o usuário
    printf("\nComparando as cartas...\n");

    // Variáveis auxiliares para armazenar pontos de cada cidade
    int pontos_cidade1 = 0, pontos_cidade2 = 0;

    // Comparação do primeiro atributo
    pontos_cidade1 += 
        (atributo1 == 1) ? (populacao1 > populacao2) : 
        (atributo1 == 2) ? (area1 > area2) : 
        (atributo1 == 3) ? (pib1 > pib2) : 
        (atributo1 == 4) ? (pontos1 > pontos2) : 
        (atributo1 == 5) ? (densidade1 < densidade2) : 
        (atributo1 == 6) ? (pib_per_capita1 > pib_per_capita2) : 0;

    pontos_cidade2 += 
        (atributo1 == 1) ? (populacao2 > populacao1) : 
        (atributo1 == 2) ? (area2 > area1) : 
        (atributo1 == 3) ? (pib2 > pib1) : 
        (atributo1 == 4) ? (pontos2 > pontos1) : 
        (atributo1 == 5) ? (densidade2 < densidade1) : 
        (atributo1 == 6) ? (pib_per_capita2 > pib_per_capita1) : 0;

    // Comparação do segundo atributo
    pontos_cidade1 += 
        (atributo2 == 1) ? (populacao1 > populacao2) : 
        (atributo2 == 2) ? (area1 > area2) : 
        (atributo2 == 3) ? (pib1 > pib2) : 
        (atributo2 == 4) ? (pontos1 > pontos2) : 
        (atributo2 == 5) ? (densidade1 < densidade2) : 
        (atributo2 == 6) ? (pib_per_capita1 > pib_per_capita2) : 0;

    pontos_cidade2 += 
        (atributo2 == 1) ? (populacao2 > populacao1) : 
        (atributo2 == 2) ? (area2 > area1) : 
        (atributo2 == 3) ? (pib2 > pib1) : 
        (atributo2 == 4) ? (pontos2 > pontos1) : 
        (atributo2 == 5) ? (densidade2 < densidade1) : 
        (atributo2 == 6) ? (pib_per_capita2 > pib_per_capita1) : 0;

    // Decisão final baseada nos pontos somados
    if (pontos_cidade1 > pontos_cidade2) {
        printf("\nA cidade vencedora é: %s\n", nome1);
    } else if (pontos_cidade2 > pontos_cidade1) {
        printf("\nA cidade vencedora é: %s\n", nome2);
    } else {
        printf("\nEmpate entre as cidades!\n");
    }

    return 0; // Fim do programa
}
