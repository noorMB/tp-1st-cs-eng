#include<stdio.h>
#include<math.h>
void even_odd(int a)
{
    if (a%2==0)
    {
        printf("the number is even");
    }
    else if (a%2!=0)
    {
        printf("the number is odd");
    }
}    
int evenodd(int a)
{
    if (a%2==0)
    {
        return 1;
    }
    else if (a%2!=0)
    {
        return 0;
    }
}
int main()
{
    int b,f;
    printf("give a number :\n");
    scanf("%d",&b);
    even_odd(b);
    f=evenodd(b);
    if(f==1)
    {
        printf("\nthe number is even");
    }
    else
    {
        printf("\nthe number is odd");
    }
    
    return 0;
}