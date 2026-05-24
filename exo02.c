#include<stdio.h>

int SUM(int n,int i)
{
    if(i>n)
    {
        return 0;
    }
    else
    {
        return i+SUM(n,i+1);
    }
}

int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    int s=SUM(a,1);
    printf("1+...+%d=%d\n",a,s);

return 0;
}