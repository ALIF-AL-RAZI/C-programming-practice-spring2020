#include<stdio.h>
int main()
{
    int a,b, i;
    scanf("%d",&a);
    i=++a;
    a=i;
    printf("%d", i);
    main();
    return 0;
}
