#include<stdio.h>
float f(float m, float n)
{
    float y;
    y= 2*m-n;
    return y;
}
int main()
{
    float m,n, o;
    scanf("%f %f",&m, &n);
    o= f(m,n);
    printf("%f", o);
    return 0;
}
