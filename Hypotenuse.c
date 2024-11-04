#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    float hyp;
    scanf("%d%d",&x,&y);
    hyp=sqrt(x*x+y*y);
    printf("%.2f",hyp);
}