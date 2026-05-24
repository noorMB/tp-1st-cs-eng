#include<stdio.h>
#include<string.h>

int SHIFT(char H[10])
{
    int j,i=0,t,n=0;
    while (H[i]!='\0')
    {
        n=n+1;
        i=i+1;
    }
    return n;
}
void kiki(char H[10],char T[10],int a)
{
    int i=0,j;   
    for(j=a-1;j>=0;j--)
        {
            T[i]=H[j];
            i=i+1;
        }   
        T[i]='\0';
        
}

int main()
{
    char word[10],Z[10];
    int n;
    printf("give a word\n");
    scanf("%s",word);
    n=SHIFT(word);
    kiki(word,Z,n);
    printf("%s\n",Z);
    return 0;
}