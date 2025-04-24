#include <stdio.h>

void movimentoTorre(int torre){
    if(torre > 0){
        printf("Esquerda ");
        movimentoTorre(torre - 1);
    }
}
void movimentoBispo(int bispo){
    if (bispo > 0){
        printf("Cima Direita ");
        movimentoBispo(bispo - 1);
    }
}
void movimentoRainha(int rainha){
    if (rainha > 0){
        printf("Direita ");
        movimentoRainha(rainha - 1);
    }
}
int main(){
    int quantidadeTorre = 8;
    int quantidadeBispo = 5;
    int quantidadeRainha = 8;

    printf("Torre: ");
    movimentoTorre(quantidadeTorre);

    printf("\n\nBispo: ");
    movimentoBispo(quantidadeBispo);

    printf("\n\nRainha: ");
    movimentoRainha(quantidadeRainha);

    printf("\n\nCavalo: ");

    for (int i = 1; i <= 1; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            printf("CIMA ");
        }
        printf("DIREITA ");
    }
    
}