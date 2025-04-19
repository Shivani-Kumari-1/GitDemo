#include<stdio.h>
int main()
{
    int a = 5;
    int *ptr = &a;
    printf("Value of a = %d",*ptr);
    return 0;
}