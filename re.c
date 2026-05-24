#include<stdio.h> 
void fill (int T[6])
{
    for (int i=0;i<6;i++)
    {
        printf("enter a number\n");
        scanf("%d",&T[i]);
    }
}  
int sum (int T[6],int i,int j)
{
   if (i>j)
   {
    return 0;
   }
   else 
   {
return T[i]+sum(T,i+1,j);
   }

}
int main()
{
    int H[6],i,j;
    fill(H);
    printf("give two numbers\n");
    scanf("%d%d",&i,&j);
    int n = sum (H,i,j);
    printf("the sum is %d\n",n);
    return 0;

}