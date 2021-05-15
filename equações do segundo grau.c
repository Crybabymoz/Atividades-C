#include <stdio.h>
#include <math.h>
int main()
{
   float a, b, c, delta, r1, r2;
     int quatro = 4, 
     dois =2;
    
     scanf("%f %f %f", &a, &b, &c);
     delta = ((b)*(b) - (quatro)*(a)*(c));
    
     if (delta>=0)
{

     r1=((-b)-(sqrt(delta)))/((dois)*(a));

     r2=((-b)+(sqrt(delta)))/((dois)*(a));

     printf("%.1f\n%.1f", r2, r1);

}

   else

     if (delta<0)

{
     printf("Delta Negativo");
}
    
    return 0;
}
