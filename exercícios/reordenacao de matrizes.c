//ex.12 reordenacao de matrizes
#include <stdio.h>
#include <stdlib.h>
//funcao imprime a matriz
void imprimeMatriz(int** mat,int lin, int col){
    for(int i=0;i<lin;i++){
        for(int j=0;j<col;j++)
            printf("%d  ",mat[i][j]);
        printf("\n");
    }
}
int** alocaMatriz(int lin, int col){
    int **mat;
    mat=(int**) malloc(sizeof(int*)*lin);
    for(int i=0;i<lin;i++){
        mat[i]=(int*)malloc(sizeof(int)*col); 
    }
    return mat;
}
// troca linha A pela linha B da matriz
int** trocaLinhas(int** mat, int a, int b, int col){
    int aux;
    for(int i=0;i<col;i++){
        aux=mat[a][i];
        mat[a][i]=mat[b][i];
        mat[b][i]=aux;
    }
    return mat;
}
// troca coluna A pela coluna B da matriz
int** trocaColunas(int** mat, int a, int b, int lin){
    int aux;
    for(int i=0;i<lin;i++){
        aux=mat[i][a];
        mat[i][a]=mat[i][b];
        mat[i][b]=aux;
    }
    return mat;
}
int main(void) {
    int lin,col; //define numeros e colunas
    scanf("%d %d",&lin,&col);
// alocação da matriz
    int** matriz=alocaMatriz(lin,col);
// entrada dos valores da matriz
    for(int i=0;i<lin;i++)
        for(int j=0;j<col;j++){  
            scanf("%d",&matriz[i][j]);
        }
    int trocaLin,trocaCol, a, b;
   // ------- Troca de linhas -------
// numero de troca de linhas
    scanf("%d",&trocaLin);
    for(int i=0;i<trocaLin;i++){
// entrada das linhas a serem trocadas
        scanf("%d %d",&a,&b);
// realiza troca
        matriz=trocaLinhas(matriz,a,b,col);
    }
// ------- Troca de colunas -------  
// numero de troca de colunas
    scanf("%d",&trocaCol);
    for(int i=0;i<trocaCol;i++){
// entrada das colunas a serem trocadas
        scanf("%d %d",&a,&b);
// realiza troca
        matriz=trocaColunas(matriz,a,b,lin);
    }
// exibe matriz
    imprimeMatriz(matriz,lin,col);
// libera memória
    for(int i=0;i<lin;i++){
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}