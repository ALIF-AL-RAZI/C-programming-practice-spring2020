#include <stdio.h>
#include <stdlib.h>

int* getFibonacciSequence(int n)
{
    int i;
    int *p = (int*)malloc((n+1)*sizeof(int));
    p[0]=0;
    p[1]=1;
    for(i=2; i<=n; i++)
    {
        p[i]=p[i-1]+p[i-2];
    }

    return p;
}

int main()
{
    int n, i;
    int *ptr;
    printf("Enter the value of n:");
    scanf("%d", &n);
    ptr= getFibonacciSequence(n);
    for (i=0; i<n; i++)
    {
        printf("%d\t", ptr[i]);
    }
    free(ptr);
    return 0;
}
