#include<stdio.h>
int sum(int *a, int *b)
{
    return (*a + *b);
}
int main()
{
    int a,b;
    printf("Enter value of a = ");
    scanf("%d", &a);
    printf("Enter value of b = ");
    scanf("%d", &b);
    int result = sum(&a,&b);
    printf("\nsum of %d + %d = %d",a,b,result);
    return 0;
}