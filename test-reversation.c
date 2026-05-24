#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
    int value;
    struct node* next;
}list; 

//.....................................................................................
void insert_begin(int v,list**H )
{
    list* newNode;
    newNode=(list*)malloc(sizeof(list));
    newNode->value=v;
    newNode->next=NULL;
    newNode->next=*H;
    *H=newNode;
}
//.......................................................................................
int max_val(list**H)
{
    list*P;
    P=*H;
    if(*H==NULL)
    {
        printf("no max, list is empty");
        return 0;
    }
    else
    {
        if( P->next==NULL)
        {
            printf("the only value in the list is: %d",P->value);
            return 0;
        }
        else
        {
            int max=P->value;
            while(P->next!=NULL)
            {
                if(P->next->value > max)
                {
                    max = P->next->value;
                }
                P = P->next;
            }
        return max;    

        } 
    }
}
//.......................................................................................
int main()
{
    list*head;
    int x,test;
    while(test==1)
    {
        printf("enter a number: ");
        scanf("%d",&x);
        insert_begin(x,&head);
        printf(" \n if you want to add another node press 1, else press 0\n"); 
        scanf("%d",&test); 
    }
    if(max_val(&head)!=0)
    {
        printf("the max is: %d\n",max_val(&head));
    }

return 0;
}