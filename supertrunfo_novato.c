#include <stdio.h>

    int main (){

        //Variáveis do código
        char codigo[4];
        char estado[30];
        char cidade[30];
        float populacao;
        int area;
        int pib;
        int p_turisticos;
        char opcao;

        //Cadastro das cartas - Introdução / Boas vindas
        printf("Bem vindo ao Super Trunfo - Cidades\n");
        printf("\n");
        printf("Digite as informações, conforme solitado a seguir:\n");
        printf("\n");

        //Cadastro das informações
        printf("Digite o código da cidade:\n");
        scanf("%s", &codigo);

        printf("Digite o estado da cidade:\n");
        scanf("%s", &estado);

        printf("Digite o nome da cidade:\n");
        scanf("%s", &cidade);

        printf("Digite o tamanho da população em milhões (exemplo, 1.5 milhões):\n");
        scanf("%f", &populacao);

        printf("Digite a área em KM² (exemplo, 200 KM²):\n");
        scanf("%d", &area);

        printf("Digite o PIB da cidade:\n");
        scanf("%d", &pib);

        printf("Digite a quantidade de pontos turísticos da cidade:\n");
        scanf("%d", &p_turisticos);

        printf("\n");

        //Exibição e conferencia dos dados inseridos
        printf("Verifique se os dados inseridos estão corretos");

        printf("\n");

        printf("Código da cidade: %s\n", codigo);
        printf("Estado: %s\n", estado);
        printf("Cidade: %s\n", cidade);
        printf("População: %f\n", populacao);
        printf("Área: %d\n", area);
        printf("PIB: %d\n", pib);
        printf("Pontos Turísticos: %d\n", p_turisticos);

        printf("\n");

        printf("Precione S para confirmar\n");
        scanf(" %c", &opcao);
        printf("Cadastro concluido!");
        
        return 0;

    }