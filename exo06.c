#include<stdio.h>
void tab_fill (int H[5])
{
     for(int i=0;i<5;i++)
    {
    printf("enter a number: ");
    scanf("%d",&H[i]);
    }
}
int MAX_el(int H[5],int i, int max)
{
    if(i>=5)
    {
        return max;
    }else
    {if(max<H[i])
        {
            return MAX_el(H,i+1,H[i]);
        }
        else
        {
            return MAX_el(H,i+1,max);
        }

    }
}

void ODD_i(int H[5], int i)
{
    if(i<5)
    {
        if(i%2!=0)
        {
            printf("odd index :%d\n",i);
        }
        ODD_i(H,i+1);
    }
}

int SUM(int H[5],int i, int s)
{
    if(i>=5)
    {
        return H[i-1];
    }
    else
    {
        return s+SUM(H,i+1,H[i]);
    }
}
//------------------------------------
int SUM1(int H[5],int i)
{
    if(i>=5)
    {
        return 0;
    }
    else
    {
        return H[i]+SUM1(H,i+1);
    }
}

int exist(int H[5],int x, int i)
{
    if(i>=5)
    {
        return 0;
    }
    else 
    {
        if(H[i]==x)
        {
            return 1;
        }
        else 
        {
            return exist(H,x,i+1);
        }
    }
}

int CHECK(int x,int i)
{
    if(i==0)
    {
        printf("the number %d doesn't exist in the array\n",x);
    }
    else 
    {
        printf("the number %d exist in the array\n",x);
    }
}


int main()
{
    int T[5];
    tab_fill(T);

   
    printf("the max is: %d\n",MAX_el(T,1,T[0]));
    ODD_i(T,0);
    int sum=SUM(T,1,T[0]);
    printf("the sum of the array elements is: %d\n",sum);

     printf("the sum11111 of the array elements is: %d\n",SUM1(T,0));
    printf("enter a number: ");
    int x;
    scanf("%d",&x);
    int check=exist(T,x,0);
    printf("the max is: %d\n",check);
    CHECK(x,check);
return 0;
}