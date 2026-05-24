#include <stdio.h>
#include <math.h>

void show_table(int H[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("T[%d] = %d\n", i, H[i]);
    }
}
//first question of the ex05------------------------------------------------
int MAX(int H[5])
{
    int max = H[0];
    for (int i = 1; i < 5; i++)
    {
        if (H[i] > max)
        {
            max = H[i];
        }
    }
    return max;
}
//second question of the ex05-------------------------------------------------
void odd_index(int H[5])
{
    printf("the odd indexed elements are :\n");
    for (int i = 1; i < 5; i++)
    {
        if (i % 2 != 0)
        {
            printf("T[%d] = %d\n", i, H[i]);
        }
    }
}
//third question of the ex05-------------------------------------------------
int SUM(int H[5])
{
    int s,i;
    s=0;
    for (i=0;i<5;i++)
    {
        s=s+H[i];
    }
    return s;
}
//fourth question of the ex05-------------------------------------------------
int exist (int H[5], int a)
{
    for (int i = 0; i < 5; i++)
    {
        if (H[i] == a)
        {
            return 1;
        }
    }
    return 0;
}
//fifth question of the ex05-------------------------------------------------
void SHIFT(int H[5],int a)
{
    int j,i,t;
    for(i=0;i<a;i++)
    {
        t=H[5-1];
        for(j=0;j<5-1;j++)
        {
            H[5-j-1]=H[5-j-2];
        }   
        H[0]=t;
    }
}
//sixth question of the ex05-------------------------------------------------
void new_tab (int TAB[5] )
{
    for (int i = 0; i < 5; i++)
    {
        TAB[i]=pow(2,i);
    }
}
//seventh question of the ex05-------------------------------------------------
//selection sort method------------------------------------------------
void sort (int H[5])
{
    int i,j,t;
    for (i=0;i<5-1;i++)
    {
        for (j=i+1;j<5;j++)
        {                                           
            if (H[i]>H[j])
            {
                t=H[i];
                H[i]=H[j];
                H[j]=t;
            }
        }
    }
}       
//bubble sort method------------------------------------------------
void sort_bubble (int H[5])
{
    int i,j,t;
    for (i=0;i<5-1;i++)
    {
        for (j=0;j<5-1-i;j++)
        {
            if (H[j]>H[j+1])
            {
                t=H[j];
                H[j]=H[j+1];
                H[j+1]=t;
            }
        }
    }
}
int main() 
{
    int n=5, T[n], i , max, s;
    printf("give the elements of the table :\n");
    for (i = 0; i < n; i++)
    {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    max=MAX(T);
    printf("the max element is :%d\n",max);
    odd_index(T);
    s=SUM(T);
    printf("the sum of the elements is :%d\n",s);
    int k;
    printf("give a number to check if it exists in the table : ");
    scanf("%d",&k);
    if (exist(T,k))
    {
        printf("the number %d exists in the table\n",k);
    }
    else
    {
        printf("the number %d does not exist in the table\n",k);
    }
    int a;
    printf("give a number of shifts to do : ");
    scanf("%d",&a);
    SHIFT(T,a);   
    printf("the new table after shifting is : \n");
    show_table(T);
    printf("the new table after sorting using selection sort method is :\n");
    sort(T);
    show_table(T);
    printf("the new table after sorting using bubble sort method is :\n");  
    sort_bubble(T);
    show_table(T);



    return 0;
}