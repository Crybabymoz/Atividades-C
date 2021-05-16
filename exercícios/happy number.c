/*numero perfeito
inteiro, calcule a soma de seus divisores
imprimir sim, caso contrario, nao*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, aux, i;
    scanf("%d", &n);  
    aux = 0; 

    for(i=1; i<n; i++)
    {
        if (n%i==0)
        {
         aux += i;
        }        
    }
    if(aux == n)
    {
      printf("SIM");
    }else 
     printf("NAO");
   return 0;
}