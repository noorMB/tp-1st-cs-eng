#include<stdio.h>
#include<math.h>
//-------------------------------------------
void array(int T[5]){
    int i;
    for(i=0;i<=4;i++){
        printf("enter T[%d]:\n",i+1);
        scanf("%d",&T[i]);
    }
 
}
//-------------------------------------------
void display_array(int T[5])
{
    int i;
    for(i=0;i<=4;i++){
        printf("T[%d]:%d\n",i,T[i]);
    }
}
//------------------------------------
int find_min(int T[5]){
    int max,i;
    max=T[0];
    for(i=0;i<4;i++){
        if(max>T[i]){
            max=T[i];
        }
    }
    return max;
}
//-----------------------------------------------
int main()
{
    int a[5];
    int K,min;
array (a);
display_array (a);
min=find_min(a);
printf("the min is :%d",min);
    return 0;

} 