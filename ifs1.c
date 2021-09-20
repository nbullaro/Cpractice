//user guesses 0 to 5
//output if correct
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //generate random number
    int maxval =25;
    srand(time(NULL));

    int randnum = rand() % maxval+1;

    printf("%d\n",randnum);

    printf("guess num 0 to %d: ",maxval);
    int input;
    scanf("%d", &input);

    if(input==randnum)
    {
        printf("you win\n");
    }
    else
    {
        printf("no win\n");
    }
}