#include <stdio.h> // biblioteca para utilizar funções de entrada e saída de dados
#include <string.h> // biblioteca para usar a função strcspn na linha 31 e 55

int main(){
    char codigoEstado1, codigoEstado2;
    char codigoCarta1[3], codigoCarta2[3];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    
    // Exibe o título do jogo e as instruções
    printf("\n\n             --------------\n");
    printf("             |Super Trunfo|\n");
    printf("             --------------\n\n");
    printf("Instruções do jogo: você será solicitado a fazer o cadastro de duas cartas com o tema cidades.\nPressione ENTER para iniciar:");
    getchar(); // Inicia o cadastro das cartas após o usuário pressionar ENTER.


    // Solicita ao usuário que cadastre as informações da primeira carta
    printf("\nCadastre a primeira carta: \n\n");
    printf("\nCódigos: A = SP | B = RJ | C = RS | D = SC | E = PR | F = DF | G = MG | H = ES");
    printf("\nInforme o código do estado (uma letra de 'A' a 'H'): ");
    scanf("%c", &codigoEstado1);
    printf("Informe o código da carta (um número de 01 a 04): ");
    scanf("%s%*c", codigoCarta1); // O %*c, que foi adicionado ao formato, é utilizado para limpar o buffer do teclado, evitando que o próximo fgets seja pulado.
    printf("Informe o nome da cidade: ");
    fgets(nomeCidade1, 50, stdin); // A função fgets é utilizada para ler strings com espaços em branco.
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0; // A função strcspn é utilizada para remover o caractere de nova linha (\n) do final da string.
    printf("Informe a população da cidade: ");
    scanf("%d", &populacao1);  
    printf("    INFORME APENAS NÚMEROS, SEPARANDO AS CASAS DECIMAIS COM PONTO(.)!!!\n");
    printf("Informe a área (em km²) da cidade: ");
    scanf("%f", &area1);
    printf("Informe o PIB (em bilhões de reais) da cidade: ");
    scanf("%f", &pib1);
    printf("Informe o número e pontos turísticos: ");
    scanf("%d", &pontosTuristicos1); //

    printf("\nCarta cadastrada com sucesso!\n");
    
    
    // Solicita ao usuário que cadastre as informações da segunda carta
    printf("\n\nCadastre a segunda carta: \n");

    printf("\nCódigos: A = SP | B = RJ | C = RS | D = SC | E = PR | F = DF | G = MG | H = ES");
    printf("\nInforme o código do estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &codigoEstado2); // O espaço antes do %c é utilizado para limpar o buffer do teclado, evitando que o esse scanf pule.
    printf("Informe o código da carta (um número de 01 a 04): ");
    scanf("%s%*c", codigoCarta2);
    printf("Informe o nome da cidade: ");
    fgets(nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;
    printf("Informe a população da cidade: ");
    scanf("%d", &populacao2);
    printf("    INFORME APENAS NÚMEROS, SEPARANDO AS CASAS DECIMAIS COM PONTO(.)\n");
    printf("Informe a área (em km²) da cidade: ");
    scanf("%f", &area2);
    printf("Informe o PIB (em bilhões de reais) da cidade: ");
    scanf("%f", &pib2);
    printf("Informe o número e pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\nCarta cadastrada com sucesso!\n\n\n");
    

    // Exibe as informações das cartas cadastradas
    printf("\n\n\nLista de cartas cadastradas:\n");
    printf("\nCarta 1:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\n", codigoEstado1, codigoEstado1, codigoCarta1, nomeCidade1);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n ", populacao1, area1, pib1, pontosTuristicos1);
    printf("\nCarta 2:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\n", codigoEstado2, codigoEstado2, codigoCarta2, nomeCidade2);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", populacao2, area2, pib2, pontosTuristicos2);


    // Espera o usuário pressionar ENTER para finalizar o programa
    printf("\n\nPressione ENTER para finalizar o programa");
    getchar();
    getchar();

    return 0;
}
