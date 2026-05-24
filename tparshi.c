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
    int n,m,f;
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

for (int i=0;i<m;i++)
{
   for(int j=0;j<n;j++)
   {
         if (sw[i]==cachm[j])
         {
              hit=hit+1;
              break;
         }
            else
            {
                cachm[j]=sw[i];
                miss=miss+1;
        break;
            }
}
}
printf("hit is :%d\n",hit);
printf("miss is :%d\n",miss);
float hr=(hit+miss);
hr=hit/hr;
float mr=(hit+miss);
mr=miss/mr;
printf("hit ratio is :%f\n",hr);
printf("miss ratio is :%f\n",mr);   
for (int i = 0; i < n; i++)
{
    printf("Cach memory[%d] = %d\n",i,cachm[i]);
}
return 0;
}
