#include<stdio.h>

int main()
{
    int n,i,j,p;

    int a[10][10];
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(j=0;j<n; j++)
        {
            scanf("%d",&a[i][j]);
            if((a[i][j]>1) || (a[i][j]<0))
            {
                printf("you need to press only 0 or 1");


            }
            else if((a[i][j]==1)&&(a[i-1][j]==1))
            {
                p=1;
            }
            else if((a[i][j]==1)&&(a[i][j-1]==1))
            {
                p=1;
            }




        }
    }

    /*for(i=0; i<n; i++)
    {
        for(j=n;j>=0; j--)
        {
           /* printf("%d %d",a[i][j],a[i][j-1]);*/

/* if((a[i][j]==1)&&(a[i][j-1]==1))

            {


                p=1;
            }

        }


    }*/



 for(i=0; i<n; i++)
    {
        for(j=0;j<n; j++)
        {
            printf("%d\t",a[i][j]);


        }
        printf("\n\n");

    }

   /* for(i=0; i<n; i++)
    {
        for(j=0;j<n; j++)
        {
            if((a[i][j]==1)&&(a[i][j]==a[i][j-1]))
            {
                 printf("Not safe1");
            p=1;

            break;

            }
            else if((a[i][j]==a[i-1][j]) && (a[i][j]==1))
            {

            printf("Not safe2");
            p=1;
            break;
            }
            printf("\n");
        }


    }*/
    if(p==1)
        printf("Not safe");
        else
            printf("SAfe");

        return 0;

}
