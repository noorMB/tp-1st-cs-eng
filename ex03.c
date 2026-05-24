#include <stdio.h>
int mirror(int a)
{
    int r=0;
    while (a!=0)
    {
        r=r*10+a%10;
        a=a/10;
    }
    return r;
}
int main() 
{
    int n;
    printf("give a number :\n");
    scanf("%d",&n);
    n=mirror(n);
    printf("the mirrored number is :%d\n",n);

    return 0;
}