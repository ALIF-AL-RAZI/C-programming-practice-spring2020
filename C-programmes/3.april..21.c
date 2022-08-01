#include <stdio.h>
#include <string.h>

struct player
{
    char Name[25];
    int Age;
    char Country[25];
    int Ranking;

};

int main()
{
    int n,i;
    char name[25];

    printf("Enter the number of players:");
    scanf("%d",&n);
    struct player p[n];

    for(int i=0;i<n;i++)
    {
        printf("Player %d:\nName:",i+1);
        getchar();
        gets(p[i].Name);
        printf("Age:");
        scanf("%d",&p[i].Age);
        getchar();
        printf("Country:");
        gets(p[i].Country);
        printf("Ranking:");
        scanf("%d",&p[i].Ranking);
    }


    printf("\n\nEnter name of the player:");
    getchar();
    gets(name);

    for(int i=0;i<n;i++)
    {
        if(strcmp(name,p[i].Name)==0)
        {
            printf("\n\nName: %s\n",p[i].Name);
            printf("Age: %d\n",p[i].Age);
            printf("Country: %s\n",p[i].Country);
            printf("Ranking: %d\n",p[i].Ranking);
        }
        else
        {
            printf("Not found");
        }
    }
    return 0;
}
