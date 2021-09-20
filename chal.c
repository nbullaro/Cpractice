#include <stdio.h>
#include <math.h>
int main()
{
    double a_1, b_1 , hyp;
    
    printf("enter side one: ");
    scanf("%lf", &a_1);
    printf("enter side two: ");
    scanf("%lf", &b_1);   
    hyp = sqrt(a_1*a_1+b_1*b_1);

    printf("hypotenuse is %f\n",hyp);
    return 0;
}