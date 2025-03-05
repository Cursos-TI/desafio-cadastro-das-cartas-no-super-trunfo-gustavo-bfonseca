#include <stdio.h>

int main (){

    // Variáveis do código
    char codigo[10];
    char estado[30];
    char cidade[30];
    int populacao;
    int area;
    long long int pib;
    int p_turisticos; // Pontos turísticos
    char opcao;

    // Cadastro das cartas - Introdução / Boas vindas
    printf("Bem vindo ao Super Trunfo - Cidades\n");
    printf("\n");
    printf("Digite as informações, conforme solitado a seguir:\n");
    printf("\n");

    // Cadastro das informações
    printf("Digite o código da cidade:\n");
    scanf("%s", codigo);

    getchar(); // Limpa o "\n", para não pular a próxima linha

    printf("Digite o nome do estado:\n");
    scanf("%[^\n]", estado); // Usei essa função para permitir que seja escrito mais de uma palavra

    getchar(); // Limpa o "\n", para não pular a próxima linha

    printf("Digite o nome da cidade:\n");
    scanf("%[^\n]", cidade); // Usei essa função para permitir que seja escrito mais de uma palavra

    printf("Digite o tamanho da população em milhões (exemplo, 1500000 milhões):\n");
    scanf("%d", &populacao);

    printf("Digite a área em KM² (exemplo, 200 KM²):\n");
    scanf("%d", &area);

    printf("Digite o PIB da cidade(exemplo, 1 bilhão = 1000000000):\n");
    scanf("%lld", &pib);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &p_turisticos);

    printf("\n");

    // Calculos necessários, após a inserção dos dados
    float densidade = (float) populacao / area; // Desidade populacional
    float pibc = (float) pib / populacao;       // PIB per capita

    // Exibição e conferencia dos dados inseridos
    printf("Verifique se os dados inseridos estão corretos");
    printf("\n");
    printf("Código da cidade: %s\n", codigo);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d milhões de pessoas\n", populacao);
    printf("Área: %d KM²\n", area);
    printf("Densidade Populacional: %.2f pessoas por KM²\n", densidade);
    printf("PIB: %lld\n", pib);
    printf("PIB per Capita: %.2f\n", pibc);
    printf("Pontos Turísticos: %d\n", p_turisticos);

    // Confirmação
    printf("\n");
    printf("Precione S para confirmar\n");
    scanf(" %c", &opcao);
    printf("Cadastro concluido!");
        
    return 0;

    }