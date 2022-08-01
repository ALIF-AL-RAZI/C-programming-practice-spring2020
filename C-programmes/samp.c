#include<stdio.h>
#include<stdlib.h>
int* getFibonacciSequence(int n)
{
    int i;
    int *p=(int*)calloc((n+1),sizeof(int));
    p[0]=0;
    p[1]=1;
    printf("fibonacci=\n");
    for(i=2; i<n; i++)
    {
        p[i]=p[i-1]+p[i-2];
    }
    return p;
}
int main()
{
    int n,i;
    int *p;
    printf("enter the number :");
    scanf("%d",&n);
    p=getFibonacciSequence(n);
    for(i=0; i<n; i++)
    {
        printf("%d ",p[i]);
    }
    free(p);
}
