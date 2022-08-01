#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,g;
    scanf("%f",&a);

    if(a>4500)
    {
        b=a-4500;
        c=(b*28)/100;
        d=(1500*18)/100;
        f=(1000*8)/100;
        g=c+d+f;
        printf("R$ %.2f",g);
    }

    else if(a>=3000.01 && a<=4500)
    {
        b=a-3000;
        c=(b*18)/100;
        f=(1000*8)/100;
        g=c+f;
        printf("R$ %.2f",g);
    }
    else if(a>=2000.01 && a<=3000)
    {
        b=a-3000;
        g=(b*8)/100;
        printf("R$ %.2f",g);
    }
    else
    {
        printf("Isento");
    }

    return 0;
}
