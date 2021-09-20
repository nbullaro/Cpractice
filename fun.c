#include <stdio.h>

int fact(int n)
{
    int factorial =1;
    for (int i = n;i>1;i--)
    {
        factorial *= i;
    }
    return factorial;
}

void outputfact(int input)
{
    printf("The factorial of %d is %d \n",input,fact(input));
}

int main()
{
    outputfact(5);
    outputfact(8);

    for(int i=0;i<10;i++)
    {
        outputfact(i);
    }
    //printf("%d\n", fact(fact(3)));
    //int number =5;
    //printf("the factorial of %d is %d\n",number,fact(number));
    return 0;
}