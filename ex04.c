#include <stdio.h>
void switch_numbers(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

int main() 
{
    int n ,m;
    printf("give two numbers :\n");
    scanf("%d",&n);
    printf("and");
    scanf("%d",&m);
    switch_numbers(&n, &m);
    printf("the switched numbers are :%d and %d\n",n,m);

    return 0;
}