#include<stdio.h>
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
int main()
{
    int a=25,b=45;
    printf("Before swapping the value of a = %d and b = %d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping the value of a = %d and b = %d",a,b);
    return 0;
}
