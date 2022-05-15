#include <stdio.h>

int privet()
{
    printf("Oh, hi. If you see this, then I have sorted out your ""git"" task. Let's get started) y? or n?\n\n\n");
    int y = 'y';
    int n = 8;
    scanf("%c", &y);
    if(y == 121)
    {
        printf("Could you tell me what the date is today?)\n");
        scanf("%d", &n);
        if (n==8)
        {
            printf("yes 8, and this means that you will soon become older, exactly in 16 days, if you do not die of allergies ahead of time))))))) :3");
        }
        else
        {
            printf("\nERROR");
        }
        return 0;
    }
    if(y == 110)
    {
        printf("realy?(\nok, goodby");
        return 0;
    }
    while (y < 127)
    {
        printf("ROCK'N ROLL ! ! !\n yes? or no?\n");
        scanf("%c", &y);
        if(y == 121)
    {
        printf("Could you tell me what the date is today?)\n");
        scanf("%d", &n);
        if (n==8)
        {
            printf("yes 8, and this means that you will soon become older, exactly in 16 days, if you do not die of allergies ahead of time))))))) :3");
        }
        else
        {
            printf("\nERROR");
        }
        return 0;
    }
    }
    return 0;
}

int main()
{
    privet();
    return 0;
}
