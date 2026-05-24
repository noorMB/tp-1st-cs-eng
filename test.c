#include<stdio.h>


void tab_fill(int H[5])
{
    for(int i=0;i<5;i++)
    {
        printf("Enter a Number:");
        scanf("%d",&H[i]);
    }
}

void neg_zero(int H[5],int i)
{
    if(i<5)
    {
        if(H[i]<0)
        {
            H[i]=0;
            neg_zero(H,i+1);
        }
        else
        {
            neg_zero(H,i+1);
        }
    }
}

void show_tab(int H[5])
{
    for(int i=0;i<5;i++)
    {
        printf("The element T[%d] is:%d\n",i,H[i]);
    }
}

int main()
{
    int T[5];
    tab_fill(T);
    neg_zero(T,0);
    show_tab(T);

return 0;
}