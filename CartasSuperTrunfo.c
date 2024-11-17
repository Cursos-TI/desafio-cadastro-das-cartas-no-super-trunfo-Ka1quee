#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char nome[40];
    int codCidade, pib, pontosTuristicos;
    int populacao;
    float area;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite o código da cidade: \n");
    scanf("%d", &codCidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área  da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Informações da sua cidade: \n");
    printf("Nome: %s \n Codigo: %d \n Populacao: %d \n Área: %f \n PIB: %f ", nome, codCidade, populacao, area, pib);

    return 0;
}
