#include <stdlib.h>
#include <stdio.h>

int i,j;
int linha, coluna;


int main (){

    printf("Informe as linhas da matriz\n");
        scanf("%d", &linha);
    printf("Informe a quantidade de colunas na matriz\n");
        scanf("%d", &coluna);

int matriza[linha][coluna];

    printf("informe os valores da matriz\n");
    for(i=0;i<linha;i++){
        for(j=0;j<linha;j++)
        scanf("%d", &matriza [i][j]);
    }

    for(i=0;i<coluna;i++){
        for(j=0;j<coluna;j++)
        printf("|%4d", matriza [i][j]);
        printf("|\n");
    }
    
    int matrizb[linha][coluna];

    printf("informe os valores da matriz\n");
    for(i=0;i<linha;i++){
        for(j=0;j<linha;j++)
        scanf("%d", &matrizb [i][j]);
    }

    for(i=0;i<coluna;i++){
        for(j=0;j<coluna;j++)
        printf("|%4d", matrizb [i][j]);
        printf("|\n");
    }

    int matrizc[linha][coluna];
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            matrizc[i][j] = 0;
        }
    }
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            matrizc[i][j] += matriza[i][j] * matrizb[i][j];
            
        }
    }

    printf("Matriz C (resultado da multiplicação):\n");
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            printf("%d\t", matrizc[i][j]);
        }
        printf("\n");


        }
        return 0;

}