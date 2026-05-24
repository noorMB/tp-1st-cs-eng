#include<stdio.h>
int NUM_of_DIG(int n,int i)
{
    if(n==0)
    {
        return i;
    }
    else
    {
        return NUM_of_DIG(n/10,i+1);
    }
}

int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    int n=NUM_of_DIG(a,0);
    printf("the number of the digits in %d is: %d\n",a,n);

return 0;
}