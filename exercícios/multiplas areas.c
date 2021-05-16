/* multiplas areas
a, b e c.*/

#include <stdio.h>
#include <math.h>

int main (void)
{
   double A, B, C;
    
    scanf("%lf %lf %lf", &A, &B, &C);

    printf("%.3lf\n", A * C / 2.0);
    printf("%.3lf\n", 3.14159 * pow(C, 2.0));
    printf("%.3lf\n", (A + B) * C / 2.0);
    printf("%.3lf\n", B * B);
    printf("%.3lf\n", A * B);
}
