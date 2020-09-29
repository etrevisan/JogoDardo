#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"");
    int x,y;
    printf("Jogo de Dardos\n\n");
    printf("Posição do dardo:\n");
    printf("\nInsira o valor de x e y respectivamente, referentes ao raio da posição em que seu dardo caiu:\n");
    printf("(Se o dardo caiu fora do alvo digite '0,0')\n");
    printf(" x= ");
    scanf("%d",&x);
    printf(" y= ");
    scanf("%d",&y);
    if(x==0&&y==0)
        printf("Você ganhou 0 pontos, pois o dardo não acertou o alvo.");
    else {
        if(x<=5&& y<=5 && x>1 && y>=1)
        printf("Você ganhou 5 pontos.");
        else
            if(x<=10&& y<=10 && x>1 && y>=1)
            printf("Você ganhou 1 ponto.");
            else
                if(x==1&& y==1)
                printf("Parabéns! Você ganhou 10 pontos.");
          }
return 0;
}
