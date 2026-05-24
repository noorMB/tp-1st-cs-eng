#include <stdio.h>
#include <stdbool.h>
typedef struct 
{
   int var;
   int occ;
}  TAB_r;
int main() 
{
    int n=10,i,c,b,j;
    int T[n];
    TAB_r TAB_Enr[n];
    
    for(i=0 ; i<n ; i++)
    {
        printf("put a num");
        scanf("%d",&T[i]);
    }
    c=2;
for (i=0 ; i<10;i++)
{
    b=0;
    while ((j<c) && (b=0))
    {
        if (TAB_Enr[j].var=T[i])
        {
            TAB_Enr[j].occ=TAB_Enr[j].occ+1;
            b=1;
        }
        else {
            j=j+1;
        }
    }
    if (b=0)
    {
        TAB_Enr[c].var=T[i];
        TAB_Enr[c].occ=1;
        c=c+1;

    }

}
for(i=0 ; i<n ; i++)
    {
        printf("\n here %d",TAB_Enr[i].var);
        printf("\n here %d",TAB_Enr[i].occ);

    }
return 0;
}
