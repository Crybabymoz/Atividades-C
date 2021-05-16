/* usando o do while
ler um numero inteiro e imprimir o fatorial dele*/
#include <stdio.h>

int main()
{
  int n, i=1;
  float fat;
     scanf("%d", &n);
     fat=1;

     do{
     fat=fat * i;
     i++;
    } while (i<=n);

     printf("%.0f\n", fat);
   return'0';
}