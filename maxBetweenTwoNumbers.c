#include<stdio.h>
void max(int *x,int *y)
{
    if(*x>*y)
    {printf("num1 = %d is max",*x);}
    else
    {printf("num2 = %d is max",*y);}
}
int main()
{
    int a=24,b=55;
    max(&a,&b);
    //printf("Maximum number = %d",findMax);
    return 0;
}