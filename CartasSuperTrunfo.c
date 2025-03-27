#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Jhonata

int main(){
    //Informação da primeira carta.
    
    char estado[20];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    char estado2[20];
    char cidade2[20];
    
    
    //exibiçao da primeira carta
    
    printf("carta1:\n");
    printf("digite seu estado: \n");
    scanf("%s" , &estado);
    
    printf("digite sua cidade: \n");
    scanf("%s" , &cidade);
    
    printf("quantos habitantes possui: \n");
    scanf("%d" , &populacao);
    
    printf("tamanho territorial em km²: \n");
    scanf("%f" , &area);
    
    printf("valor do pib: \n");
    scanf("%f" , &pib);
    
    printf("quantos pontos turísticos possui: \n");
    scanf("%d" , &pontosturisticos);
    
    //exibição da segunda carta
    
    printf("carta2:\n");
    printf("digite seu estado: \n");
    scanf("%s" , &estado2);
    
    printf("digite sua cidade: \n");
    scanf("%s" , &cidade2);
    
    printf("quantos habitantes possui: \n");
    scanf("%d" , &populacao);
    
    printf("tamanho territorial em km²: \n");
    scanf("%f" , &area);
    
    printf("valor do pib: \n");
    scanf("%f" , &pib);
    
    printf("quantos pontos turísticos possui: \n");
    scanf("%d" , &pontosturisticos);
    
    printf("novo commit\n");
     
    

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
 
    return 0;

}

