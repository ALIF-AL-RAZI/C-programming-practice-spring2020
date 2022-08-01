#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int i,j, p=0, n,k=0,d=0, **arr;

    scanf("%d", &n);

    if(n<2 || n>100)
    {
        system("cls");
        main();
    }


    arr=(int**)malloc(n* sizeof(int *));
    for(i=0;i<=n;i++)
    {
        arr[i]=(int*)malloc(n*sizeof(int));
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }


    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if (arr[i][j]<=1 && arr[i][j]>=0)
            {
                if(arr[i][j]==arr[i+1][j] && arr[i][j]==1)
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
        for(j=n-1; j>0; j--)
        {
            if(arr[i][j]==arr[i][j-1] && arr[i][j]==1)
            {
                d=1;
            }
        }
    }


    if(k==1)
    {

        system("cls");
        main();
    }
    else if(p==1||d==1)
    {
        printf("\n\nUNSAFE\n\n");
    }
    else
    {
        printf("\n\nSAFE\n\n");
    }

    return 0;
}
