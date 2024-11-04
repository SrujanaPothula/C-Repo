#include<stdio.h>
int main()
{
    int num1,num2,add,sub,mul,div,rem;
    scanf("%d%d",&num1,&num2);
    add=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/num2;
    rem=num1%num2;
    printf("Sum:%d\n",add);
    printf("Difference:%d\n",sub);
    printf("Product:%d\n",mul);
    printf("Quotient:%d\n",div);
    printf("Remainder:%d",rem);
}