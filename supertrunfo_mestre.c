#include <stdio.h>

int main (){

    // Variáveis do código
    char codigo1[10], codigo2[10];
    char estado1[30], estado2[30];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    int area1, area2;
    long long int pib1, pib2;
    int p_turisticos1, p_turisticos2; // Pontos turísticos
    char opcao;

    // Cadastro das cartas - Introdução / Boas vindas
    printf("Bem vindo ao Super Trunfo - Cidades\n");
    printf("\n");
    printf("Digite as informações, conforme solitado a seguir:\n");
    printf("\n");

    // Cadastro das informações da primeira cidade
    printf("Cadastro da primeira cidade:\n");

    printf("Digite o código da cidade:\n");
    scanf("%s", codigo1);

    getchar(); // Limpa o "\n", para não pular a próxima linha

    printf("Digite o nome do estado:\n");
    scanf("%[^\n]", estado1); // Usei essa função para permitir que seja escrito mais de uma palavra

    getchar(); // Limpa o "\n", para não pular a próxima linha

    printf("Digite o nome da cidade:\n");
    scanf("%[^\n]", cidade1); // Usei essa função para permitir que seja escrito mais de uma palavra

    printf("Digite o tamanho da população em milhões (exemplo, 1500000 milhões):\n");
    scanf("%d", &populacao1);

    printf("Digite a área em KM² (exemplo, 200 KM²):\n");
    scanf("%d", &area1);

    printf("Digite o PIB da cidade(exemplo, 1 bilhão = 1000000000):\n");
    scanf("%lld", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &p_turisticos1);

    printf("\n");

    // Cadastro das informações da segunda cidade
    printf("Cadastro da segunda cidade:\n");

    printf("Digite o código da segunda cidade:\n");
    scanf("%s", codigo2);

    getchar(); // Limpa o "\n", para não pular a próxima linha

    printf("Digite o nome do estado:\n");
    scanf("%[^\n]", estado2); // Usei essa função para permitir que seja escrito mais de uma palavra

    getchar(); // Limpa o "\n", para não pular a próxima linha

    printf("Digite o nome da cidade:\n");
    scanf("%[^\n]", cidade2); // Usei essa função para permitir que seja escrito mais de uma palavra

    printf("Digite o tamanho da população em milhões (exemplo, 1500000 milhões):\n");
    scanf("%d", &populacao2);

    printf("Digite a área em KM² (exemplo, 200 KM²):\n");
    scanf("%d", &area2);

    printf("Digite o PIB da cidade(exemplo, 1 bilhão = 1000000000):\n");
    scanf("%lld", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &p_turisticos2);

    printf("\n");

    // Calculos necessários, após a inserção dos dados das duas cidades
    float densidade1 = (float) populacao1 / area1; // Desidade populacional
    float pibc1 = (float) pib1 / populacao1;       // PIB per capita
    float densidade2 = (float) populacao2 / area2; // Desidade populacional
    float pibc2 = (float) pib2 / populacao2;       // PIB per capita

    // Exibição e conferencia dos dados inseridos
    printf("Verifique se os dados inseridos estão corretos\n");

    printf("\n");

    printf("Dados da primeira cidade:\n");
    printf("\n");
    printf("Código da cidade: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d milhões de pessoas\n", populacao1);
    printf("Área: %d KM²\n", area1);
    printf("Densidade Populacional: %.2f pessoas por KM²\n", densidade1);
    printf("PIB: %lld\n", pib1);
    printf("PIB per Capita: %.2f\n", pibc1);
    printf("Pontos Turísticos: %d\n", p_turisticos1);

    printf("\n");

    printf("Dados da segunda cidade:\n");
    printf("\n");
    printf("Código da cidade: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d milhões de pessoas\n", populacao2);
    printf("Área: %d KM²\n", area2);
    printf("Densidade Populacional: %.2f pessoas por KM²\n", densidade2);
    printf("PIB: %lld\n", pib2);
    printf("PIB per Capita: %.2f\n", pibc2);
    printf("Pontos Turísticos: %d\n", p_turisticos2);

    // Confirmação
    printf("\n");
    printf("Precione S para confirmar\n");
    scanf(" %c", &opcao);
    printf("Cadastro concluido!\n");
    printf("\n");

    //Comparação dos dados
    printf("Agora o sistema vai comparar os dados.\n");

    printf("\n");

    int populacaoresult1 = (populacao1 > populacao2), populacaoresult2 = (populacao2 > populacao1);
    int arearesult1 = (area1 > area2), arearesult2 = (area2 > area1);
    int densidaderesult1 = (densidade1 < densidade2), densidaderesult2 = (densidade2 < densidade1);
    int pibresult1 = (pib1 > pib2), pibresult2 = (pib2 > pib1);
    int pibcresult1 = (pibc1 > pibc2), pibcresult2 = (pibc2 > pibc1);
    int p_turisticosresult1 = (p_turisticos1 > p_turisticos2), p_turisticosresult2 = (p_turisticos2 > p_turisticos1);

    //Soma dos pontos
    printf("Soma dos pontos da primeira cidade: %d\n", populacaoresult1 + arearesult1 + densidaderesult1 + pibcresult1 + pibresult1 + p_turisticosresult1);
    printf("Soma dos pontos da segunda cidade: %d\n", populacaoresult2 + arearesult2 + densidaderesult2 + pibcresult2 + pibresult2 + p_turisticosresult2);
    printf("A cidade com mais pontos, é a vencedora!!!");
    return 0;

    }