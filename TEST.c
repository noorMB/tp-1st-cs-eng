#include<stdio.h>
#include<string.h>
#include<math.h>
float cal(int x, int y)
{
     int p;
    float s,n;
    s=0;
    for (int i = 1; i < x; i++)
    {
        p=pow(i,y);
        //printf("%d\n",p);
        s=s+i*pow(p,-1);
        //printf("%f\n",n);

    }
return s;
}

void dis(float s)
{
printf("%f",s);
}

int main()
{
    int a, b;
    float s;
printf("Enter two integers: ");
scanf("%d %d", &a, &b);
s=cal(a,b);
dis(s);
return 0;
}