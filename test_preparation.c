#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
    int value;
    struct node* next;
}list; 

void insert_begin(int v,list**H )
{
    list* newNode;
    newNode=(list*)malloc(sizeof(list));
    newNode->value=v;
    newNode->next=NULL;
    newNode->next=*H;
    *H=newNode;
}
void insert_E(int v,list**H )
{
    list*p;
    p=*H;
    list* newNode;
    newNode=(list*)malloc(sizeof(list));
    newNode->value=v;
    newNode->next=NULL;
    if(*H==NULL)
    {
        *H=newNode;
    }
    else{
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=newNode;
}
}
void display(list**H)
{
    list*P;
    P=*H;
    while(P!=NULL)
    {
        printf("%d ",P->value);
        P=P->next;
    } 
}
int main()
{
    int x,n ,  z ;
    list *head;
    n=1;
    head=NULL;
    while(n!=0)
    {
        printf("enter a number:");
        scanf("%d",&x);
        
        printf("    enter your choise : 1: begin /  2: End   \n"); 
        scanf("%d",&z);
         if(z==1)
        insert_begin(x,&head); 
        else
         insert_E(x,&head); 
        display(&head); 

        printf(" \n if you want to add another node press 1, else press 0\n"); 
        scanf("%d",&n);  
    }
}