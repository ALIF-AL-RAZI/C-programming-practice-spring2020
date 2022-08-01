#include<stdio.h>
struct distance
{
    int x1;
    int x2;
    int y1;
    int y2;
    float distance1;
};
int main()
{
    struct distance manhattan;
    printf("enter the value of x1,x2,y1,y2:");
    scanf("%d%d%d%d",&manhattan.x1,&manhattan.x2,&manhattan.y1,&manhattan.y2);
    manhattan.distance1=(manhattan.x1-manhattan.x2)+(manhattan.y1-manhattan.y2);
    printf("Manhattan Distance=%.2f",manhattan.distance1);
}
