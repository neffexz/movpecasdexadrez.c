#include <stdio.h>

    int main(){
        //Declaração de variáveis
        int bispo, rainha, torre, opcao;
        int movimentoRainha = 1;
        int movimentoBispo = 1;

        //Menu interativo para a movimentação das peças, simulando o movimento que foi dado no desafio
        printf("**Simulação Peças de Xadrez**\n");
        printf("1. Bispo\n");
        printf("2. Torre\n");
        printf("3. Rainha\n");
        scanf("%d", &opcao);

        switch (opcao){
            //Movimentação da torre
            case 2:
            for (int i = 1; i <= 5; i++){
                if (i == 1){
                    printf("A torre se move %d casa para a direita.\n", i);
                }else {
                printf("A torre se move %d casas para a direita.\n", i);
                }
            }
            break;

            //Movimentação da rainha
            case 3:
            while (movimentoRainha <= 5){
                if (movimentoRainha == 1){
                    printf("A rainha se move %d casa para a esquerda.\n", movimentoRainha);
                }else {
                printf("A rainha se move %d casas para a esquerda.\n", movimentoRainha);
                }
                movimentoRainha++;
            }
            break;

            //Movimentação do bispo
            case 1:
            do {
                if (movimentoBispo == 1){
                    printf("O bispo se move %d casa para a diagonal cima/direita.\n", movimentoBispo);
                }else {
                printf("O bispo se move %d casas para a diagonal cima/direita.\n", movimentoBispo);
                }
                movimentoBispo++;   
                }   
                while (movimentoBispo <= 5);
            break;
                default:
                printf("Opção inválida.\n");
            }
        }