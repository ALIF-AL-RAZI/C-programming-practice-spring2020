#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j, n, **arr;

    scanf("%d",&n);

    arr=(int**)malloc(n* sizeof(int *));
    for(i=0;i<=n;i++)
    {
        arr[i]=(int*)malloc(n*sizeof(int));
    }




    for(i=0;i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }


    for(i=0;i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
