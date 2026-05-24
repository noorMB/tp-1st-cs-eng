#include<stdio.h>

void tab_fill (int H[5])
{
    for(int i=0;i<5;i++)
    {
    printf("enter a number: ");
    scanf("%d",&H[i]);
    }
}

void DIS_pos(int H[5],int i)
{
    if(i<5)
    {
        if(H[i]>=0)
        {
            printf("%d\n",H[i]);
            DIS_pos(H,i+1);
        }
        else
        {
            DIS_pos(H,i+1);
        }
    }
}

int main()
{
    int T[5];
    tab_fill(T);
    printf("the positive numbers of the array:\n");
    DIS_pos(T,0);

return 0;
}