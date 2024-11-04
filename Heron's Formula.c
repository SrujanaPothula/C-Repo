#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,heron;
    scanf("%d%d%d",&a,&b,&c);
    scanf("%f",&s);
    s=(a+b+c)/2.0;
    heron=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.4f",heron);
}