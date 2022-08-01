#include<stdio.h>
int main()
{
    int i, j, t;
    for(i=1; i<=4; i++)
    {
        for(j=0; j<=4; j+=2)
        {
            t+=j;
        }

    }

    printf("%d",t);

    return 0;
}
