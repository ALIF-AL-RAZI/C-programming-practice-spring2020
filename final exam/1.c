#include<stdio.h>
int nsum(int n)
{
    if (n==0)
    return 0;
    else
    return (n+nsum(n-1));

}
int main ()
{
    int n, sum;
    printf("Finding out the summation of 1+2+3+...+n\n");
    printf("Enter n:");
    scanf("%d", &n);
    sum=nsum(n);
    printf("Sum=%d",sum);
    return 0;
}
