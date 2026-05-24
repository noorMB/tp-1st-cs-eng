#include<stdio.h>
#include<math.h>
void ShowTab(float H[8])
{
    for (int i = 0; i <8; i++)
    {
        printf(" Cach memory[%d] = %f\n", i, H[i]);
    }

}
int main()
{
    float cm=128,cachm[8]={4,7,9,10,15,25,8,6},sw[9]={1,3,25,4,6,3,5,8,15},hit,miss,hr,mr;
    int i,j;
    
    for (i=0;i<9;i++){
        for(j=0;j<8;j++)
        {
        if (sw[i]!=cachm[i])
        {
            cachm[j]=sw[i];
            miss=miss+1;
         }
        else
        {
        hit=hit+1;
        }
    }
}
    ShowTab(cachm);
    printf("miss is :%f\n",miss);
    printf("hit is :%f\n",hit);
    hr=hit/(hit+miss);
    mr=hit+miss;
    mr=miss/mr;
    printf("hit ratio is :%f\n",hr);
    printf("miss ratio is :%f\n",mr);

return 0;

}