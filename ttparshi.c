#include<stdio.h>
#include<string.h>
#include<math.h>
//int exist(int sw,int cachm[],int m,int n)
//{
  //  for (int i = 0; i < n; i++)
    //{
      //  if (sw == cachm[i])
        //{
        //    return 1;
      //  }
    //}
  //  return 0;
//}
int main()
{
    int n,m,f,hit=5,miss=2;
printf("enter the size of cach\n");
scanf("%d",&n);
printf("enter the size of sequence\n");
scanf("%d",&m);
int cachm[n],sw[m],hit=0,miss=0;

printf("enter the cach\n");

for (int i = 0; i < n; i++)
{
    scanf("%d",&cachm[i]);
}
printf("enter the sequence\n");
for (int i = 0; i < m; i++)
{
    scanf("%d",&sw[i]);
}
printf("hit is :%d\n",hit);
printf("miss is :%d\n",miss);
float hr=(hit+miss);
hr=hit/hr;
float mr=(hit+miss);
mr=miss/mr;
printf("hit ratio is :%f\n",hr);
printf("miss ratio is :%f\n",mr);  
cach[0] = 8
Cach memory[1] = 4
Cach memory[2] = 6
Cach memory[3] = 8
Cach memory[4] = 9

return 0;
}