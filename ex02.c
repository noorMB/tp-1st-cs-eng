#include<stdio.h>
#include<math.h>
int multiply(int a,int b)
{
    int c=0;
    for(int i=0;i<b;i++)
    {
        c=c+a;
    }
    return c;
}
int main()
{
    int a,b,f;
    printf("give two numbers :\n");
    scanf("%d%d",&a,&b);
    f=multiply(a,b);
    printf("the result is :%d\n",f);
    return 0;
}