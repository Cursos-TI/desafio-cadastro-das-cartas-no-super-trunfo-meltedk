#include <stdio.h> // biblioteca para utilizar funções de entrada e saída de dados
#include <string.h> // biblioteca para usar a função strcspn na linha 25 e 46

int main(){
    char codigoEstado1, codigoEstado2, codigoCarta1[3], codigoCarta2[3], nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    
    // Exibe o título do jogo e as instruções
    printf("\n\n                     --------------\n");
    printf("                     |Super Trunfo|\n");
    printf("                     --------------\n\n");
    printf("\nManual do jogo: fazer o cadastro de duas cartas com o tema cidades.\n\nPressione ENTER para iniciar:");
    getchar(); // Inicia o cadastro das cartas após o usuário pressionar ENTER.
   
    // Solicita ao usuário que cadastre as informações da primeira carta
    printf("\n\nCadastre a primeira carta: \n\n");
    printf("\nCodigo: A = SP | B = RJ | C = RS | D = SC | E = PR | F = DF | G = MG | H = ES");
    printf("\nInforme o codigo do estado (uma letra de 'A' a 'H'): ");
    scanf("%c", &codigoEstado1);
    printf("Informe o codigo da carta (um numero de 01 a 04): ");
    scanf("%s%*c", codigoCarta1); // O %*c, que foi adicionado ao formato, é utilizado para limpar o buffer do teclado, evitando que o próximo fgets seja pulado.
    printf("Informe o nome da cidade: ");
    fgets(nomeCidade1, 50, stdin); // A função fgets é utilizada para ler strings com espaços em branco.
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0; // A função strcspn é utilizada para remover o caractere de nova linha (\n) do final da string.
    printf("Informe a populacao da cidade: ");
    scanf("%d", &populacao1);  
    printf("    INFORME APENAS NUMEROS, SEPARANDO AS CASAS DECIMAIS COM PONTO(.)!!!\n");
    printf("Informe a area (em km2) da cidade: ");
    scanf("%f", &area1);
    printf("Informe o PIB (em bilhoes de reais) da cidade: ");
    scanf("%f", &pib1);
    printf("Informe a quantidade e pontos turisticos: ");
    scanf("%d", &pontosTuristicos1); //
    printf("\nCarta cadastrada com sucesso!\n");
    
    // Solicita ao usuário que cadastre as informações da segunda carta
    printf("\n\nCadastre a segunda carta: \n");
    printf("\nCodigos: A = SP | B = RJ | C = RS | D = SC | E = PR | F = DF | G = MG | H = ES");
    printf("\nInforme o codigo do estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &codigoEstado2); // O espaço antes do %c é utilizado para limpar o buffer do teclado, evitando que o esse scanf pule.
    printf("Informe o codigo da carta (um numero de 01 a 04): ");
    scanf("%s%*c", codigoCarta2);
    printf("Informe o nome da cidade: ");
    fgets(nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;
    printf("Informe a populacao da cidade: ");
    scanf("%d", &populacao2);
    printf("    INFORME APENAS NUMEROS, SEPARANDO AS CASAS DECIMAIS COM PONTO(.)\n");
    printf("Informe a area (em km2) da cidade: ");
    scanf("%f", &area2);
    printf("Informe o PIB (em bilhoes de reais) da cidade: ");
    scanf("%f", &pib2);
    printf("Informe a quantidade e pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\nCarta cadastrada com sucesso!\n\n\n");

    // Realiza os cálculos da densidade populacional e do PIB per capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // O PIB é informado em bilhões de reais, então é convertido para reais multiplicando por um bilhão
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibe as informações das cartas cadastradas
    printf("\n\n\nLista de cartas cadastradas:\n");
    printf("\nCarta 1:\nEstado: %c\nCodigo: %c%s\nNome da Cidade: %s\n", codigoEstado1, codigoEstado1, codigoCarta1, nomeCidade1);
    printf("Populacao: %d\nArea: %.2f km2\nPIB: %.2f bilhoes de reais\nNumero de Pontos Turisticos: %d\n", populacao1, area1, pib1, pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\nPIB per Capita: %.2f reais\n", densidade1, pibPerCapita1);
    printf("\nCarta 2:\nEstado: %c\nCodigo: %c%s\nNome da Cidade: %s\n", codigoEstado2, codigoEstado2, codigoCarta2, nomeCidade2);
    printf("Populacao: %d\nArea: %.2f km2\nPIB: %.2f bilhoes de reais\nNumero de Pontos Turisticos: %d\n", populacao2, area2, pib2, pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\nPIB per Capita: %.2f reais\n", densidade2, pibPerCapita2);

    // Espera o usuário pressionar ENTER para finalizar o programa
    printf("\n\nPressione ENTER para finalizar o programa");
    getchar();
    getchar();

    return 0;
}
