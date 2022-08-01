#include <stdio.h>
int main()
{
    int arr[3][3], i, j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Mat %d% d:",i+1,j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n\nThe Matrix is:\n\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n\n\n");
    }

    printf("\n\nResult:\n\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            if(arr[i][j]<0)
                arr[i][j]=0;

            printf("%d\t",arr[i][j]);
        }
        printf("\n\n\n");
    }
    return 0;

}
