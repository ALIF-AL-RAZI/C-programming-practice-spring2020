#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int i,j, p, n,k,d;

    scanf("%d", &n);

    int arr[n][n];

    if(n>=2&&n<=100)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

    }

    else
    {
        system("cls");
        main();
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if (arr[i][j]<=1 &&arr[i][j]>=0)
            {
                if(arr[i][j]==arr[i-1][j] && arr[i][j]==1)
                {
                    p=1;
                }
            }
            else
            {
                k=1;
                break;
            }
        }
        if(k==1)
        {
            break;
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=n; j>0; j--)
        {
            if(arr[i][j]==arr[i][j-1] && arr[i][j]==1)
            {
                d=2;
            }
        }
    }

    if(p==1||d==2)
    {
        printf("UNSAFE");
    }
    else if(k==1)
    {
        system("cls");
        main();
    }
    else
    {
        printf("SAFE");
    }

    return 0;
}

