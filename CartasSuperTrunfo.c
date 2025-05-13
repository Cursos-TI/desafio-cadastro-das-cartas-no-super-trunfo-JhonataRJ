#include <stdio.h>

int main() {
    // Dados da Carta 1
    char  estado1[]            = "São Paulo";
    char  cidade1[]            = "São Paulo";
    int   populacao1           = 12300000;
    float area1                = 1521.11;
    float pib1                 = 2300.5;
    int   pontos1              = 10;
    float densidade1           = 8079.2;

    // Dados da Carta 2
    char  estado2[]            = "Rio de Janeiro";
    char  cidade2[]            = "Rio de Janeiro";
    int   populacao2           = 6748000;
    float area2                = 1182.3;
    float pib2                 = 400.8;
    int   pontos2              = 12;
    float densidade2           = 5707.4;

    int   escolha;

    // Exibir menu de comparação
    printf("=========== SUPER TRUNFO: PAÍSES ===========\n");
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área territorial (km²)\n");
    printf("3 - PIB (em bilhões de R$)\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica (hab/km²) [MENOR vence]\n");
    printf("--------------------------------------------\n");
    printf("Digite sua escolha (1 a 5): ");
    scanf("%d", &escolha);

    printf("\n========== COMPARAÇÃO DAS CARTAS ==========\n");
    printf("Carta 1 - %s (%s)\n", estado1, cidade1);
    printf("Carta 2 - %s (%s)\n\n", estado2, cidade2);

    if (escolha == 1) {
        printf("Atributo escolhido: População\n");
        printf("%s: %d habitantes\n", estado1, populacao1);
        printf("%s: %d habitantes\n", estado2, populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", estado1);
        } else {
            if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", estado2);
            } else {
                printf("Resultado: Empate!\n");
            }
        }
    } else {
        if (escolha == 2) {
            printf("Atributo escolhido: Área territorial\n");
            printf("%s: %.2f km²\n", estado1, area1);
            printf("%s: %.2f km²\n", estado2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", estado1);
            } else {
                if (area2 > area1) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", estado2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
        } else {
            if (escolha == 3) {
                printf("Atributo escolhido: PIB (Produto Interno Bruto)\n");
                printf("%s: R$ %.2f bilhões\n", estado1, pib1);
                printf("%s: R$ %.2f bilhões\n", estado2, pib2);
                if (pib1 > pib2) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", estado1);
                } else {
                    if (pib2 > pib1) {
                        printf("Resultado: Carta 2 (%s) venceu!\n", estado2);
                    } else {
                        printf("Resultado: Empate!\n");
                    }
                }
            } else {
                if (escolha == 4) {
                    printf("Atributo escolhido: Pontos turísticos\n");
                    printf("%s: %d pontos\n", estado1, pontos1);
                    printf("%s: %d pontos\n", estado2, pontos2);
                    if (pontos1 > pontos2) {
                        printf("Resultado: Carta 1 (%s) venceu!\n", estado1);
                    } else {
                        if (pontos2 > pontos1) {
                            printf("Resultado: Carta 2 (%s) venceu!\n", estado2);
                        } else {
                            printf("Resultado: Empate!\n");
                        }
                    }
                } else {
                    if (escolha == 5) {
                        printf("Atributo escolhido: Densidade demográfica (MENOR vence)\n");
                        printf("%s: %.2f hab/km²\n", estado1, densidade1);
                        printf("%s: %.2f hab/km²\n", estado2, densidade2);
                        if (densidade1 < densidade2) {
                            printf("Resultado: Carta 1 (%s) venceu!\n", estado1);
                        } else {
                            if (densidade2 < densidade1) {
                                printf("Resultado: Carta 2 (%s) venceu!\n", estado2);
                            } else {
                                printf("Resultado: Empate!\n");
                            }
                        }
                    } else {
                        printf("Opção inválida. Reinicie o jogo e escolha um valor entre 1 e 5.\n");
                    }
                }
            }
        }
    }

    printf("============================================\n");

    return 0;
}