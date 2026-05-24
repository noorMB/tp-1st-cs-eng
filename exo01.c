#include<stdio.h>
#include<math.h>
void RemplirTab(int H[5])
{
    int i;
    for (int i = 0; i <= 5-1; i++)
    {
        printf("give T[%d] = ", i);
        scanf("%d", &H[i]);
    }
}
void ShowTab(int H[5])
{
    for (int i = 0; i <= 5-1; i++)
    {
        printf("u put T[%d] = %d\n", i, H[i]);
    }
}
int FINDMAX(int H[5] )
{
    int max,i;
    max=H[0];
    for(i=1;i<5;i++)
    {
        if (H[i]>max)
        {
        max=H[i];
        }
    }
    return max;
}
int FINDMIN(int H[5] )
{
    int min,i;
    min=H[0];
    for(i=1;i<5;i++)
    {
        if (H[i] < min)
        {
        min=H[i];
        }
    }
    return min;
}
int SUM(int H[5])
{
    int s,i;
    s=0;
    for (i=0;i<5;i++)
    {
        s=s+H[i];
    }
    return s;
}
void SHIFT(int H[5],int k)
{
int j,i,t;
for(i=0;i<k;i++)
{
    t=H[5-1];
    for(j=0;i<5;i++)
    {
     H[5-j-1]=H[5-j-2];
    }
    H[0]=t;
}
}
//void SORT(int H[5])
int main()
{
    int i,m,mi,s,n;
    int T [5];
    RemplirTab(T);
    ShowTab(T);
    m=FINDMAX(T);
    printf ("the biggest number is %d\n", m); 
    mi=FINDMIN(T);
    printf ("the smallest number is %d\n", mi);  
    s=SUM(T);
    printf ("the sum of the array T is = %d\n", s);  
    printf("give a number ");
    scanf("%d",&n);
    SHIFT(T,n);
    ShowTab(T);
    //SORT(T)







    return 0;
}