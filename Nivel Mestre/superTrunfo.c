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
    printf("Vamos ver as suas cartas!\n\n");
    system("pause");
    system("cls");

    // Primeira carta

    char estado1 = 'A';
    char codigo1[] = "A17";
    char nome1[] = "S�o Paulo";
    unsigned long int pop1 = 45000000;
    float area1 = 250000;
    float pib1 = 3100;
    int pontos1 = 100;

    // Com os dados, criamos as vari�veis e calculamos o PIB per Capita
    //  a Densidade Populacional da primeira carta
    float dens1 = pop1 / area1;
    float capita1 = (pib1 * 1000000000) / pop1;

    // Com todos os dados, criamos e calculamos
    // o Super Poder da primeira carta
    float super1 = pop1 + area1 + pib1 + pontos1 + capita1 + (1.0 / dens1);

    // Segunda carta

    char estado2 = 'B';
    char codigo2[] = "B22";
    char nome2[] = "Rio de Janeiro";
    unsigned long int pop2 = 17500000;
    float area2 = 43000;
    float pib2 = 1100;
    int pontos2 = 100;

    // Com os dados, criamos as vari�veis e calculamos o PIB per Capita
    //  a Densidade Populacional da segunda carta
    float dens2 = pop2 / area2;
    float capita2 = (pib2 * 1000000000) / pop2;

    // Com todos os dados, criamos e calculamos
    // o Super Poder da segunda carta
    float super2 = pop2 + area2 + pib2 + pontos2 + capita2 + (1.0 / dens2);

    printf("\n\nEssas s�o suas cartas!\n\n");

    printf("\n");
    printf("              --- Carta 1 ---              \n");
    printf("-------------------------------------------\n");

    printf("| Estado: %c\n", estado1);
    printf("| C�digo: %s\n", codigo1);
    printf("| Nome da cidade: %s\n", nome1);

    printf("| Popula��o: %lu\n", pop1);
    printf("| �rea: %.2f km quadrados\n", area1);
    printf("| PIB: %.2f bilh�es de reais\n", pib1);
    printf("| N�mero de pontos tur�sticos: %d\n", pontos1);

    printf("| Densidade populacional: %.2f\n", dens1);
    printf("| PIB per Capita: %.2f reais\n", capita1);
    printf("| Super Poder: %.2f\n", super1);

    printf("-------------------------------------------\n");

    printf("\n\n");
    printf("              --- Carta 2 ---              \n");
    printf("-------------------------------------------\n");

    printf("| Estado: %c\n", estado2);
    printf("| C�digo: %s\n", codigo2);
    printf("| Nome da cidade: %s\n", nome2);

    printf("| Popula��o: %lu\n", pop2);
    printf("| �rea: %.2f km quadrados\n", area2);
    printf("| PIB: %.2f bilh�es de reais\n", pib2);
    printf("| N�mero de pontos tur�sticos: %d\n", pontos2);

    printf("| Densidade populacional: %.2f\n", dens2);
    printf("| PIB per Capita: %.2f reais\n", capita2);
    printf("| Super Poder: %.2f\n", super2);

    printf("-------------------------------------------\n");

    system("pause");
    system("cls");


    printf("\n\nAgora, vamos ver qual � a maioral\n\n");
    printf("Escolha o primeiro atributo num�rico de uma carta\n");
    printf("Digite o valor correspondente ao atributo abaixo\n");
    printf("E veja se voc� venceu!\n\n");

    printf("Popula��o -------------> (1)\n");
    printf("�rea ------------------> (2)\n");
    printf("PIB -------------------> (3)\n");
    printf("Pontos Tur�sticos -----> (4)\n");
    printf("Densidade Demogr�fica -> (5)\n");
    printf("PIB per Capita --------> (6)\n");
    printf("Super Poder -----------> (7)\n");

    int escolha1;
    printf("\nInsira o n�mero: ");
    scanf(" %d", &escolha1);

    printf("\n\nE agora, escolha o segundo atributo num�rico de uma carta\n");
    printf("(N�o digite o mesmo n�mero! Utilize atributos diferentes)\n\n");

    printf("Popula��o -------------> (1)\n");
    printf("�rea ------------------> (2)\n");
    printf("PIB -------------------> (3)\n");
    printf("Pontos Tur�sticos -----> (4)\n");
    printf("Densidade Demogr�fica -> (5)\n");
    printf("PIB per Capita --------> (6)\n");
    printf("Super Poder -----------> (7)\n");

    int escolha2;
    printf("\nInsira o n�mero: ");
    scanf(" %d", &escolha2);

    int verificacao;

    verificacao = (escolha1 == escolha2) ? 0 : 1;

    if (verificacao){
        printf("\nAs escolhas foram diferentes, podemos continuar\n");
    }else{
        printf("\nAs escolhas foram iguais, encerrando programa...\n");
        return 0;
    }

    printf("\n");
    system("pause");
    system("cls");


    // Agora vamos calcular quem vence, um a um

    printf("\n--- Hora do duelo! ---\n");

    printf("\n\n");

    float primeiraSoma_carta1;
    float segundaSoma_carta1;

    float primeiraSoma_carta2;
    float segundaSoma_carta2;

    switch(escolha1){

    case 1:
        if(pop1 > pop2){
            printf("Carta 1 - %s (%s): %lu\n", nome1, codigo1, pop1);
            printf("Carta 2 - %s (%s): %lu\n", nome2, codigo2, pop2);

            printf("Popula��o: Carta 1 venceu!\n\n");

        }else if (pop1 == pop2){
            printf("Carta 1 - %s (%s): %lu\n", nome1, codigo1, pop1);
            printf("Carta 2 - %s (%s): %lu\n", nome2, codigo2, pop2);

            printf("Popula��o: Empate!\n\n");

        }else{
            printf("Carta 1 - %s (%s): %lu\n", nome1, codigo1, pop1);
            printf("Carta 2 - %s (%s): %lu\n", nome2, codigo2, pop2);

            printf("Popula��o: Carta 2 venceu!\n\n");

        }

        primeiraSoma_carta1 = pop1;
        primeiraSoma_carta2 = pop2;

        break;

    case 2:

        if(area1 > area2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, area1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, area2);

            printf("�rea: Carta 1 venceu!\n\n");

        }else if (area1 == area2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, area1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, area2);

            printf("�rea: Empate!\n\n");

        }else{
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, area1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, area2);

            printf("�rea: Carta 2 venceu!\n\n");

        }

        primeiraSoma_carta1 = area1;
        primeiraSoma_carta2 = area2;

        break;

    case 3:

        if(pib1 > pib2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, pib1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, pib2);

            printf("PIB: Carta 1 venceu!\n\n");

        }else if (pib1 == pib2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, pib1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, pib2);

            printf("PIB: Empate!\n\n");

        }else{
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, pib1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, pib2);

            printf("PIB: Carta 2 venceu!\n\n");

        }

        primeiraSoma_carta1 = pib1;
        primeiraSoma_carta2 = pib2;

        break;

    case 4:

        if(pontos1 > pontos2){
            printf("Carta 1 - %s (%s): %d\n", nome1, codigo1, pontos1);
            printf("Carta 2 - %s (%s): %d\n", nome2, codigo2, pontos2);

            printf("N�mero de pontos tur�sticos: Carta 1 venceu!\n\n");

        }else if (pontos1 == pontos2){
            printf("Carta 1 - %s (%s): %d\n", nome1, codigo1, pontos1);
            printf("Carta 2 - %s (%s): %d\n", nome2, codigo2, pontos2);

            printf("N�mero de pontos tur�sticos: Empate!\n\n");

        }else{
            printf("Carta 1 - %s (%s): %d\n", nome1, codigo1, pontos1);
            printf("Carta 2 - %s (%s): %d\n", nome2, codigo2, pontos2);

            printf("N�mero de pontos tur�sticos: Carta 2 venceu!\n\n");

        }

        primeiraSoma_carta1 = pontos1;
        primeiraSoma_carta2 = pontos2;

        break;

    case 5:

        if(dens1 < dens2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, dens1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, dens2);

            printf("Densidade populacional: Carta 1 venceu!\n\n");

        }else if (dens1 == dens2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, dens1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, dens2);

            printf("Densidade populacional: Empate!\n\n");

        }else{
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, dens1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, dens2);

            printf("Densidade populacional: Carta 2 venceu!\n\n");

        }

        primeiraSoma_carta1 = dens1;
        primeiraSoma_carta2 = dens2;

        break;

    case 6:

        if(capita1 > capita2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, capita1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, capita2);

            printf("PIB per capita: Carta 1 venceu!\n\n");

        }else if (capita1 == capita2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, capita1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, capita2);

            printf("PIB per capita: Empate!\n\n");

        }else{
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, capita1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, capita2);

            printf("PIB per capita: Carta 2 venceu!\n\n");

        }

        primeiraSoma_carta1 = capita1;
        primeiraSoma_carta2 = capita2;

        break;

    case 7:

        if(super1 > super2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, super1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, super2);

            printf("Super poder: Carta 1 venceu!\n\n");

        }else if (super1 == super2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, super1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, super2);

            printf("Super poder: Empate!\n\n");

        }else{
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, super1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, super2);

            printf("Super poder: Carta 2 venceu!\n\n");
        }

        primeiraSoma_carta1 = super1;
        primeiraSoma_carta2 = super2;

        break;

    default:
        printf("Caractere inv�lido, o jogo resetar�\n\n");

        return 0;

    }

    switch(escolha2){

    case 1:
        if(pop1 > pop2){
            printf("Carta 1 - %s (%s): %lu\n", nome1, codigo1, pop1);
            printf("Carta 2 - %s (%s): %lu\n", nome2, codigo2, pop2);

            printf("Popula��o: Carta 1 venceu!\n\n");

        }else if (pop1 == pop2){
            printf("Carta 1 - %s (%s): %lu\n", nome1, codigo1, pop1);
            printf("Carta 2 - %s (%s): %lu\n", nome2, codigo2, pop2);

            printf("Popula��o: Empate!\n\n");

        }else{
            printf("Carta 1 - %s (%s): %lu\n", nome1, codigo1, pop1);
            printf("Carta 2 - %s (%s): %lu\n", nome2, codigo2, pop2);

            printf("Popula��o: Carta 2 venceu!\n\n");

        }

        segundaSoma_carta1 = pop1;
        segundaSoma_carta2 = pop2;

        break;

    case 2:

        if(area1 > area2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, area1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, area2);

            printf("�rea: Carta 1 venceu!\n\n");

        }else if (area1 == area2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, area1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, area2);

            printf("�rea: Empate!\n\n");

        }else{
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, area1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, area2);

            printf("�rea: Carta 2 venceu!\n\n");

        }

        segundaSoma_carta1 = area1;
        segundaSoma_carta2 = area2;

        break;

    case 3:

        if(pib1 > pib2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, pib1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, pib2);

            printf("PIB: Carta 1 venceu!\n\n");

        }else if (pib1 == pib2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, pib1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, pib2);

            printf("PIB: Empate!\n\n");

        }else{
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, pib1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, pib2);

            printf("PIB: Carta 2 venceu!\n\n");

        }

        segundaSoma_carta1 = pib1;
        segundaSoma_carta2 = pib2;

        break;

    case 4:

        if(pontos1 > pontos2){
            printf("Carta 1 - %s (%s): %d\n", nome1, codigo1, pontos1);
            printf("Carta 2 - %s (%s): %d\n", nome2, codigo2, pontos2);

            printf("N�mero de pontos tur�sticos: Carta 1 venceu!\n\n");

        }else if (pontos1 == pontos2){
            printf("Carta 1 - %s (%s): %d\n", nome1, codigo1, pontos1);
            printf("Carta 2 - %s (%s): %d\n", nome2, codigo2, pontos2);

            printf("N�mero de pontos tur�sticos: Empate!\n\n");

        }else{
            printf("Carta 1 - %s (%s): %d\n", nome1, codigo1, pontos1);
            printf("Carta 2 - %s (%s): %d\n", nome2, codigo2, pontos2);

            printf("N�mero de pontos tur�sticos: Carta 2 venceu!\n\n");

        }

        segundaSoma_carta1 = pontos1;
        segundaSoma_carta2 = pontos2;

        break;

    case 5:

        if(dens1 < dens2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, dens1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, dens2);

            printf("Densidade populacional: Carta 1 venceu!\n\n");

        }else if (dens1 == dens2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, dens1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, dens2);

            printf("Densidade populacional: Empate!\n\n");

        }else{
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, dens1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, dens2);

            printf("Densidade populacional: Carta 2 venceu!\n\n");

        }

        segundaSoma_carta1 = dens1;
        segundaSoma_carta2 = dens2;

        break;

    case 6:

        if(capita1 > capita2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, capita1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, capita2);

            printf("PIB per capita: Carta 1 venceu!\n\n");

        }else if (capita1 == capita2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, capita1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, capita2);

            printf("PIB per capita: Empate!\n\n");

        }else{
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, capita1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, capita2);

            printf("PIB per capita: Carta 2 venceu!\n\n");

        }

        segundaSoma_carta1 = capita1;
        segundaSoma_carta2 = capita2;

        break;

    case 7:

        if(super1 > super2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, super1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, super2);

            printf("Super poder: Carta 1 venceu!\n\n");

        }else if (super1 == super2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, super1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, super2);

            printf("Super poder: Empate!\n\n");

        }else{
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, super1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, super2);

            printf("Super poder: Carta 2 venceu!\n\n");
        }

        segundaSoma_carta1 = super1;
        segundaSoma_carta2 = super2;

        break;

    default:
        printf("Caractere inv�lido, o jogo resetar�\n\n");

        return 0;

    }

    printf("\n");
    system("pause");
    system("cls");

    printf("\n\nPara finalizar, vamos ver quem ganhou somando os atributos\n");
    printf("utilizados nas escolhas anteriores!\n\n");
    printf("L� vai!\n\n");

    float final1 = primeiraSoma_carta1 + segundaSoma_carta1;
    float final2 = primeiraSoma_carta2 + segundaSoma_carta2;

    if(final1 > final2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, final1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, final2);

            printf("Compara��o Final: Carta 1 venceu!\n\n");

        }else if (final1 == final2){
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, final1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, final2);

            printf("Compara��o Final: Empate!\n\n");

        }else{
            printf("Carta 1 - %s (%s): %.2f\n", nome1, codigo1, final1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, codigo2, final2);

            printf("Compara��o Final: Carta 2 venceu!\n\n");

        }

    system("pause");
    system("cls");

    printf("\n\nMuito obrigada por jogar...\n");
    printf("\n--- Super Trunfo ---\n\n");
    printf("Nos vemos na pr�xima commit!\n\n");
    system("pause");
    system("cls");

    return 0;
}
