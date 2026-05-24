#include<stdio.h> 
void fill (int T[6])
{
    for (int i=0;i<6;i++)
    {
        printf("enter a number\n");
        scanf("%d",&T[i]);
    }
}  
int sort (int T[6],int i)
{
    if (i>5)
    {
        return 1;

    }    
        
     if (T[i]<T[i-1])
     {
             return 0;
        }
            else 
         {
            sort (T,i+1);
            }
        
    
}
void test (int n)
{
    if (n==0)
    {
        printf("the numbers are not in order\n");
    }
    else
    {
        printf("the numbers are in order\n");
    }
}
int pos_sum (int T[6],int i)
{
    if (i>5)
    {
        return 0;

    }    
        
     if (T[i]>0)
     {
           return T[i]+pos_sum(T,i+1);
        }
            else 
         {
            return pos_sum (T,i+1);
            }
        

}
int main()
{
    int H[6];
    fill(H);
    int n = sort(H,0);
    test(n);
    int s = pos_sum(H,0);
    printf("the sum of positive numbers is: %d\n", s);
    return 0;

}