#include<stdio.h>
int main()
{
    float vol, R;
    scanf("%f",&R);
    vol= (4.0/3.0)*(3.14)*R*R*R;
    printf("%.2f",vol);
}