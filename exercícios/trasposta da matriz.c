/* matriz transposta
ler as dimensoes de n e m de uma matriz
imprimir a transposta da matriz*/
#include <stdio.h>

int main()
{
    int n, m, i, j; // valores para matriz e para transpor ela 
    float mat[2][2]; // declarando a matriz 2x2 (n, m)
    scanf("%d %d", &n, &m); // declararacao das variaveis 
    // comando para verificar a linha da matriz
    for(i=0;i<n;i++) 
    {  
    // comando para verificar a coluna da matriz
       for(j=0;j<m;j++)
       {                
    // declarar a matriz     
        scanf("%f/t",&mat[i][j]);
       }
    }
    // declarar a matriz invertendo a linha e coluna
    for(i=0; i<m; i++)
    {
       for(j=0; j<n; j++)
       {
    // imprimir a transposta
        printf("%.0f ", mat[j] [i]);
    }    
        printf("\n");
    }
    return 0;
}
