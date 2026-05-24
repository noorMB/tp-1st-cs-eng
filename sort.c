#include<stdio.h>
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
    int H[5] = {64, 25, 12, 22, 11};
    sort(H);
    printf("Sorted array (Selection Sort): \n");
    for (int i = 0; i < 5; i++)
        printf("%d ", H[i]);
    printf("\n");

    int H2[5] = {64, 25, 12, 22, 11};
    sort_bubble(H2);
    printf("Sorted array (Bubble Sort): \n");
    for (int i = 0; i < 5; i++)
        printf("%d ", H2[i]);
    printf("\n");
    
    return 0;
}