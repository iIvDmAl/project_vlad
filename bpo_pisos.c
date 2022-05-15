#include <stdio.h>

int main()
{
    int n;
    printf("\n\n\n\n\n\t\tmy brother pisos?\n\n\n");
    printf("\tYes? - 1:\n\n");
    printf("\tNo?  - 2:\n");
    scanf("%d", &n);
    if(n==1)
    {
        printf("\taaaaaaaannnnddddddd   SING ALONG...\n\n");
        for(int i=1; i<=5; i++)
        {
            if(i==5)
            {
                printf("\n\t\t\t\t\tMY BROOOOOOTHEEEEEER ------- PIIIIIISOOOOOOOSSSSS ! ! ! ! !\n\n\n\n");
                printf("  \t\t________                 _______     _______    _______     ____       \n");
                printf("  \t\t|      |    |     /|    |       |   |       |  |       |    |  |       \n");
                printf("  \t\t|      |    |    / |    |       |   |       |  |       |    |  |       \n");
                printf("  \t\t|      |    |   /  |    |           |       |  |            |  |       \n");
                printf("  \t\t|      |    |  /   |    |           |       |  |            |__|       \n");
                printf("  \t\t|      |    | /    |    |       |   |       |  |       |    ____       \n");
                printf("  \t\t|      |    |/     |    |_______|   |_______|  |_______|   |____|\n\n\n\n");
            }
            else printf("\t\tmy brother pisos!\n");
        }
        return 0;
    }
    if(n==2)
    {
        printf("\n\n\t\tI want to sing! AGREE ! ! !\n");
        scanf("%d", &n);
        while(n!=1)
        {
            printf("\n\n\t\tI want to sing! AGREE ! ! !\n");
            scanf("%d", &n);
        }
        if(n==1)
        {
            printf("\n  EXELLENT ! ! !\n\n");
            printf("\taaaaaaaannnnddddddd   SING ALONG...\n\n");
            for(int i=1; i<=5; i++)
            {
            if(i==5)
                {
                printf("\n\t\t\t\t\tMY BROOOOOOTHEEEEEER ------- PIIIIIISOOOOOOOSSSSS ! ! ! ! !\n\n\n\n");
                printf("  \t\t________                 _______     _______    _______     ____       \n");
                printf("  \t\t|      |    |     /|    |       |   |       |  |       |    |  |       \n");
                printf("  \t\t|      |    |    / |    |       |   |       |  |       |    |  |       \n");
                printf("  \t\t|      |    |   /  |    |           |       |  |            |  |       \n");
                printf("  \t\t|      |    |  /   |    |           |       |  |            |__|       \n");
                printf("  \t\t|      |    | /    |    |       |   |       |  |       |    ____       \n");
                printf("  \t\t|      |    |/     |    |_______|   |_______|  |_______|   |____|\n\n\n\n");
                }
            else printf("\t\tmy brother pisos!\n");
            }
        return 0;
        }
    }
    else 
    {
        printf("\n\tERROR bleat'\n\n\t\t:(\n\ngit merge");
    }
    return 0;
}