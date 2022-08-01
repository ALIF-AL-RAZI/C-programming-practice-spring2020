#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int arr[10][10],i,j, p, n,k,d;

    printf("Enter n:");
    scanf("%d", &n);
    if(n>=2&&n<=100)
    {


    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
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


                /*system("cls");
                main();*/







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
    printf("\n\n%d\n\n", d);

    if(p==1 ||d==2)
    {
        printf("Unsafe");
    }
    /*else if(k==1)
    {
        system("cls");
        main();
    }*/
    else
    {
        printf("safe");
    }




    }
    return 0;
}
