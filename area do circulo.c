/* Area do cicrulo dado um raio (ponto flut com 2 casas decimais)
considerando PI = 3.14159
A área deve ser apresentada com 4 casas após o ponto decimal (use variável do tipo double).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
     double raio, area, pi= 3.14159;
     
     scanf("%lf", &raio);
 
     area = pi * (raio * raio);
 
     printf("%.4lf\n", area);
 
     return 0;
}
   