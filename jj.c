
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
int main()
{
    int i,n=5,T[n];
    printf("give the elements of the table :\n");
    for (i = 0; i < n; i++)
    {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
}