#include<stdio.h>
int num_words(char H[100])
{
    int i,nw=0;
    for(i=0;i<100;i++)
    {
        if((H[i]==' ')||(H[i]=='.'))
        {
            nw = nw + 1;
        }
    }
    return nw;
}
int num_sen(char H[100])
{
    int i,nw=0;
    while(H[i]!='\0')
    {
        if((H[i]=='.'))
        {
            nw = nw + 1;
        }
    }
    return nw;
}
int main()
{
    int nw,n=10;
    char TEXT[n];
    printf("write in your text\n");
    getchar();
    fgets(TEXT, sizeof(TEXT),stdin);
    nw=num_words(TEXT);
    printf("the number of words in this text is:%d\n",nw);


return 0;
}