#include <stdio.h>
    int main(){

        int i = 1;
        int u = 1;

        printf("Torre: ");

        for (int i = 1; i <= 5; i++)
        {
            printf("Direta ");
        }

        printf("\n\nBispo: ");

        while (i <= 5)
        {
            printf("Cima Direta ");
            
            i++;
        }
        
        printf("\n\nRainha: ");

        do
        {
            u++;
            printf("Esquerda ");
        } while (u <= 8);
        
        printf("\n\nCavalo: ");

        int j = 1, t, o = 1;

        while (j--)
        {
            for (t = 0; t < 2; t++)
            {
                printf("Cima ");
            }
            printf("Direita ou ");
        }

        while (o--)
        {
            for (t = 0; t < 2; t++)
            {
                printf("Cima ");
            }
            printf("Esquerda ");
        }
        
}
