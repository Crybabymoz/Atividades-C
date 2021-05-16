#include <stdio.h>

int main(){

    int mat[5][3];
    int linha,coluna;
    float det;
    for (linha=0; linha<3;linha++){
        for (coluna=0; coluna<3;coluna++){
         scanf("%d",&mat[linha][coluna]);
            if(linha==0){
             mat[3][coluna] = mat[linha][coluna];
            }
                 if(linha == 1){
                 mat[4][coluna] = mat[linha][coluna];
        }
    }

}

    det = ((mat[0][0]*mat[1][1]*mat[2][2]) + (mat[1][0]*mat[2][1]*mat[3][2]) + (mat[2][0]*mat[3][1]*mat[4][2])) -((mat[2][0]*mat[1][1]*mat[0][2])+(mat[3][0]*mat[2][1]*mat[1][2])+(mat[4][0]*mat[3][1]*mat[2][2]));
    printf("%.0f",det);

    return 0;
}