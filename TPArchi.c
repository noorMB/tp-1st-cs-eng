#include<stdio.h>
#include<math.h>
int main()
{
    int c,nc,w,l,nw,mar;
    printf("give a capasity in MB :\n");
    scanf("%d",&c);
    nc=c*pow(2,10);
    printf("the capacity in KB is %d\n",nc);
    printf("give the size of the word :\n");
    scanf("%d",&w);
    l=nc*pow(2,10);
    l=l*8;
    nw=l/w;
    printf("the number of words is :%d\n",nw);
    mar=log2(nw);
    printf("the number of bits for the address(MAR) is :%d\n",mar);
    return 0;
}