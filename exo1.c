#include<stdio.h>
#include<math.h>
void pos_neg(int a)
{
    if (a>0)
    {
        printf("the number is positive");
    }
    else if (a<0)
    {
        printf("the number is negative");
    }
    else
    {
        printf("the number is zero");
    }
}
int pos_neg_zero(int a)
{
    if (a>0)
    {
        return 1;
    }
    else if (a<0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int b,f;
    printf("give a number :\n");
    scanf("%d",&b);
    pos_neg(b);
    f=pos_neg_zero(b);
    if(f==1)
    {
        printf("\nthe number is positive");
    }
    else if (f==-1)
    {
        printf("\nthe number is negative");
    }
    else
    {
        printf("\nthe number is zero");
    }
    
    return 0;
}