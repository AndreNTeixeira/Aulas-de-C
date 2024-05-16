#include <stdio.h>
#include <stdlib.h>

int i,j;

int linha, coluna;

int main (){

    printf("Informe as linhas da matriz\n");
        scanf("%d", &linha);
    printf("Informe a quantidade de colunas na matriz\n");
        scanf("%d", &coluna);

int matriz[linha][coluna];

    printf("informe os valores da matriz\n");
    for(i=0;i<linha;i++){
        for(j=0;j<linha;j++)
        scanf("%d", &matriz [i][j]);
    }

    for(i=0;i<coluna;i++){
        for(j=0;j<coluna;j++)
        printf("|%4d", matriz [i][j]);
        printf("|\n");
    }
    return 0;


}