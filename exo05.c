#include<stdio.h>

void binary(int n)
{
    if(n!=0)
    {
        binary(n/2);
        printf("%d",n%2);
    }
}

int main()
{
    int a;
    printf("enter a number in decimal: ");
    scanf("%d",&a);
    printf("the number in binary is:");
    binary(a);
    printf("\n");

return 0;
}