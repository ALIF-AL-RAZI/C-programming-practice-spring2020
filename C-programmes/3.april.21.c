#include<stdio.h>
#include<string.h>

struct Player
{
    char Name[25];
    int Age;
    char Country[25];
    int Ranking;
};


int main()
{
    int i,n;
    char name[25];


    printf("Enter number of players:" );
    scanf("%d", &n);

    struct Player p[n];

    for(i=0; i<n; i++)
    {
        printf("Player %d:\nName:",i+1);
        gets(p[i].Name);
        printf("Age:");
        scanf("%d",&p[i].Age);
        printf("Country:");
        gets(p[i].Country);
        printf("Ranking:");
        scanf("%d",&p[i].Ranking);
    }

     printf("Enter players name:");
     gets(name);

      for(i = 0; i<n; i++)
    {
        if(strcmp((p[i].Name), name) == 0)
        {
            printf("Print Player Name, Age, Country, Ranking:\n");
            printf("Name: %s\n", p[i].Name);
            printf("Age: %d\n", p[i].Age);
            printf("Country: %s\n", p[i].Country);
            printf("Ranking: %d\n", p[i].Ranking);
            break;
        }
        else
            printf("player not found");
    }
    return 0;

}
