#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {

    setlocale(LC_ALL, "portuguese");

    printf("\n\nBem vindo ao...\n");
    printf("\n--- Super Trunfo ---\n\n");
    printf("Vamos fazer as suas cartas!\n\n");
    system("pause");
    system("cls");

    // Primeira carta

    char estado1;
    char codigo1[5];
    char nome1[30];
    unsigned long int pop1;
    float area1;
    float pib1;
    int pontos1;

    printf("\n\nInsira os dados da sua primeira carta:\n\n");

    printf("\nQual o estado a carta representa? (escolha uma letra entre A e H) ");
    scanf(" %c", &estado1);
    limparBuffer();

    printf("\nQual o código da carta? ");
    fgets(codigo1, 4, stdin);
    codigo1[strcspn(codigo1, "\n")] = 0;
    limparBuffer();

    printf("\nQual o nome do estado? ");
    fgets(nome1, 29, stdin);
    nome1[strcspn(nome1, "\n")] = 0;
    limparBuffer();

    printf("Qual a população? ");
    scanf("%lu", &pop1);
    limparBuffer();

    printf("\nQual a área (em km quadrados)? ");
    scanf("%f", &area1);
    limparBuffer();

    printf("\nQual o PIB (em bilhôes de reais)? ");
    scanf("%f", &pib1);
    limparBuffer();

    printf("\nQuantos pontos turísticos ela têm? ");
    scanf("%d", &pontos1);
    limparBuffer();

    // Com os dados, criamos as variáveis e calculamos o PIB per Capita
    //  a Densidade Populacional da primeira carta
    float dens1 = pop1 / area1;
    float capita1 = (pib1 * 1000000000) / pop1;

    // Com todos os dados, criamos e calculamos
    // o Super Poder da primeira carta
    float super1 = pop1 + area1 + pib1 + pontos1 + capita1 + (1.0 / dens1);

    printf("\n\nÓtimo! Vamos para a sua segunda carta.\n\n");
    system("pause");
    system("cls");

    // Segunda carta

    char estado2;
    char codigo2[5];
    char nome2[30];
    unsigned long int pop2;
    float area2;
    float pib2;
    int pontos2;

    printf("\n\nInsira os dados da sua segunda carta:\n\n");

    printf("\nQual o estado a carta representa? (escolha uma letra entre A e H) ");
    scanf(" %c", &estado2);
    limparBuffer();

    printf("\nQual o código da carta? ");
    fgets(codigo2, 4, stdin);
    codigo2[strcspn(codigo2, "\n")] = 0;
    limparBuffer();

    printf("\nQual o nome do estado? ");
    fgets(nome2, 29, stdin);
    nome2[strcspn(nome2, "\n")] = 0;
    limparBuffer();

    printf("Qual a população? ");
    scanf("%lu", &pop2);
    limparBuffer();

    printf("\nQual a área (em km quadrados)? ");
    scanf("%f", &area2);
    limparBuffer();

    printf("\nQual o PIB (em bilhôes de reais)? ");
    scanf("%f", &pib2);
    limparBuffer();

    printf("\nQuantos pontos turísticos ela têm? ");
    scanf("%d", &pontos2);
    limparBuffer();

    // Com os dados, criamos as variáveis e calculamos o PIB per Capita
    // e a Densidade Populacional da segunda carta
    float dens2 = pop2 / area2;
    float capita2 = (pib2 * 1000000000) / pop2;

    // Com todos os dados, criamos e calculamos
    // o Super Poder da segunda carta
    float super2 = pop2 + area2 + pib2 + pontos2 + capita2 + (1.0 / dens2);

    printf("\n\nPerfeito! Vamos ver como ficaram as suas cartas.\n\n");
    system("pause");
    system("cls");

    // Exibindo os dados das cartas
    // Primeira carta

    printf("\n\nEssas são suas cartas!\n\n");

    printf("\n");
    printf("              --- Carta 1 ---              \n");
    printf("-------------------------------------------\n");

    printf("| Estado: %c\n", estado1);
    printf("| Código: %s\n", codigo1);
    printf("| Nome da cidade: %s\n", nome1);

    printf("| População: %lu\n", pop1);
    printf("| Área: %.2f km quadrados\n", area1);
    printf("| PIB: %.2f bilhões de reais\n", pib1);
    printf("| Número de pontos turísticos: %d\n", pontos1);

    printf("| Densidade populacional: %.2f\n", dens1);
    printf("| PIB per Capita: %.2f reais\n", capita1);
    printf("| Super Poder: %.2f\n", super1);

    printf("-------------------------------------------\n");

    printf("\n\n");
    printf("              --- Carta 2 ---              \n");
    printf("-------------------------------------------\n");

    printf("| Estado: %c\n", estado2);
    printf("| Código: %s\n", codigo2);
    printf("| Nome da cidade: %s\n", nome2);

    printf("| População: %lu\n", pop2);
    printf("| Área: %.2f km quadrados\n", area2);
    printf("| PIB: %.2f bilhões de reais\n", pib2);
    printf("| Número de pontos turísticos: %d\n", pontos2);

    printf("| Densidade populacional: %.2f\n", dens2);
    printf("| PIB per Capita: %.2f reais\n", capita2);
    printf("| Super Poder: %.2f\n", super2);

    printf("-------------------------------------------\n");

    system("pause");
    system("cls");


    printf("\n\nAgora, vamos ver qual é a maioral\n\n");
    printf("Vamos pegar o valor do PIB de ambas as cartas e comparar\n");
    printf("Veja se você venceu!\n\n");

    system("pause");
    system("cls");


    // Agora vamos calcular quem vence

    printf("\n--- Hora do duelo! ---\n");

    printf("\n\n");

    if(pib1 > pib2){
        printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", nome1, codigo1, pib1);
        printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", nome2, codigo2, pib2);
        printf("PIB: Carta 1 venceu!\n");
    }else{
        printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", nome1, codigo1, pib1);
        printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", nome2, codigo2, pib2);
        printf("PIB: Carta 2 venceu!\n");
    }

    system("pause");
    system("cls");

    printf("\n\nMuito obrigada por jogar...\n");
    printf("\n--- Super Trunfo ---\n\n");
    printf("Nos vemos na próxima commit!\n\n");
    system("pause");
    system("cls");

    return 0;
}
