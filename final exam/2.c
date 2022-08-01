#include<stdio.h>
int main ()
{
    int arr[10]={23, 12, 19 ,12 , -1};
    int i, n;
    printf("The array is: { ");
    for (i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("}");

    for (i=5; i>=4; i--)
    {
        arr[i]=arr[i-1];
    }

    printf("\n\nInsert only 35 at index 3 of the array\n\n");

    scanf("%d", &n);
    printf("\n\n");
    arr[3]=n;
    printf("The resultant array is: { ");
    for (i=0; i<=5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}\n\n");

    return 0;
}
