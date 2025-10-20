#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char state1[20] = "standart", state2[20] = "standart", cityname1[20] = "standart", cityname2[20] = "standart", chartercode1[10] = "standart", chartercode2[10] = "standart";
    int turisticpoints1 = 0, turisticpoints2 = 0;
    unsigned long int population1 = 0, population2 = 0;
    float area1 = 0.0, area2 = 0.0, PIB1 = 0.0, PIB2 = 0.0, populationaldensity1 = 0.0, populationaldensity2 = 0.0, PIBperC1 = 0.0, PIBperC2 = 0.0, superpower1 = 0.0, superpower2 = 0.0, inversedensity1 = 0.0, inversedensity2 = 0.0;

    // Cadastro das Cartas:
    // Solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
        printf("Super Trunfo - Cartas de Cidades Brasileiras\n");
            printf("\n");
        printf("Insira os dados das cartas:\n");
            printf("\n");
                printf("Carta 1:\n");
                printf("\n Estado: ");
                    scanf("%s", state1);
                printf("\n Código: ");
                    scanf("%s", chartercode1);
                printf("\n Nome da cidade: ");
                    scanf("%s", cityname1);
                printf("\n População: ");
                    scanf("%lu", &population1);
                printf("\n Área (em km²): ");
                    scanf("%f", &area1);
                printf("\n PIB (bilhões de reais): ");
                    scanf("%f", &PIB1);
                printf("\n Número de pontos turísticos: ");
                    scanf("%d", &turisticpoints1);
            printf("\n");
                printf("Carta 2:\n");
                printf("\n Estado: ");
                    scanf("%s", state2);
                printf("\n Código: ");
                    scanf("%s", chartercode2);
                printf("\n Nome da cidade: ");
                    scanf("%s", cityname2);
                printf("\n População: ");
                    scanf("%lu", &population2);
                printf("\n Área (em km²): ");
                    scanf("%f", &area2);
                printf("\n PIB (bilhões de reais): ");
                    scanf("%f", &PIB2);
                printf("\n Número de pontos turísticos: ");
                    scanf("%d", &turisticpoints2);
            printf("\n");

    // Extrutura adicional que calcula novos parâmetros nao preenchidos
        populationaldensity1 = (float) population1 / area1;
        populationaldensity2 = (float) population2 / area2;
        inversedensity1 = 1.0 / populationaldensity1;
        inversedensity2 = 1.0 / populationaldensity2;   
        PIBperC1 = (float) PIB1 / population1;
        PIBperC2 = (float) PIB2 / population2;
        superpower1 = (float) population1 + area1 + PIB1 + turisticpoints1 + PIBperC1 + inversedensity1;
        superpower2 = (float) population2 + area2 + PIB2 + turisticpoints2 + PIBperC2 + inversedensity2;    

    // Comparação de Cartas:
    // Lógica de comparação entre duas cartas.
    // Exibição dos Resultados:
        printf("Confira os dados das cidades %s e %s:\n", cityname1, cityname2);
            printf("Comparação das cartas - ATRIBUTO: POPULAÇÃO\n");
                printf("Carta 1, cidade de %s (%s) - População: %lu\n", cityname1, state1, population1);
                printf("Carta 2, cidade de %s (%s) - População: %lu\n", cityname2, state2, population2);
                    if (population1 > population2) {
                        printf("Vencedor: Carta 1 - %s (%s)\n", cityname1, state1);
                    } else if (population2 > population1) {
                        printf("Vencedor: Carta 2 - %s (%s)\n", cityname2, state2);
                    } else {
                        printf("Empate na população!\n");
                    }
            printf("\n");
        printf("Fim do Super Trunfo.\n");
    return 0;
}
