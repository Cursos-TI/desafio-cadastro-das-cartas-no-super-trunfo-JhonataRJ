#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


int main(){
//Informação da primeira carta.
char estado1[] = "fortaleza";
char cidade1[] = "Ceará";
int populaçao1[] = 223560;
float area1[] = 2520.5;
float pib1[] = 520000.7;
int pontos, turisticos1[] = 27;

//informação da segunda carta.
char estado2[] = "Sergipe";
char cidade2[] = "Aracaju";
int populaçao2[] = 320000;
float area2[] = 1200.27;
float pib2[] = 360000.3;
int pontos, turisticos2[] = 18;

//exibiçao das informaçoes da primeira carta.
printf("carta 1:\n");
printf("estado: %s\n" , estado1);
printf("cidade: %n\n" , cidade1);
printf("populaçao: %d habitantes" , populaçao1);
printf("area: %.2f km²\n" , area1);
printf("pib: %.2f bilhoes de reais" , pib1);
printf("pontos, turisticos: %d" , pontos, turisticos1);

//exibiçao das informaçoes da segunda carta.
printf("carta 2:\n");
printf("estado: %s\n , estado2");
printf("cidade2: %n\n" , cidade2);
printf("populaçao: %d habitantes" , populaçao2);
printf("area: %.2f km²\n" , area2);
printf("pib: %.2f bilhoes de reais" , pib2);
printf("pontos, turisticos: %d" , pontos turisticos2);










}


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;

