#include <stdio.h>

int main()
{
    printf("choose a menu option 1 to 4\n");
    printf("1. add patient\n");
    printf("2. view patient\n");
    printf("3. search patients\n");
    printf("4. exit\n");

    int input;
    scanf("%d", &input);

    if (input==1)
    {
        printf("adding patient\n");
    }else if (input==2)
    {
        printf("viewing patient\n");
    }else if (input==3)
    {
        printf("searching patients\n");
    }else if (input==4)
    {
        printf("exiting\n");
        printf("want to save?: ");
        char q;
        getchar();
        scanf("%c",&q);
        

        if(q == 'Y'||q == 'y')
        {
            printf("saving changes\n");
        }else if(q=='N'||q=='n')
        {
            printf("fine whatever\n");
        }else
        {
            printf("Haxing det\n");
        }
    }else
    {
        printf("incorrect input\n");
    }


    return 0;
}