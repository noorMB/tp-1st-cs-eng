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
//......................................................................................
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
//......................................................................................
//find a value in the list
int find(list**H,int v)
{
    list*p;
    p=*H;
    while(p!=NULL)
    {
        if(p->value==v)
        {
            return 1;
        }
        p=p->next;
    }
    return 0;
}
void check(list**H,int v)
{
    if(find(H,v)==1)
    {
        printf("Value found in the list\n");
    }
    else
    {
        printf("Value not found in the list\n");
    }
}

//.......................................................................................
void delete(list**H,int v)
{
    if (*H == NULL)
    {
        printf("List is empty, nothing to delete\n");
    }
    else
    {
    list*p;
    list*prec;
    p=*H;
    while(p->next!=NULL && p->next->value!=v)
    {
        p=p->next;
    }
    if(p->value==v)
    {
        if (p==*H)
        {
        *H=p->next;
        free(p);
        }
        else
        {
            prec->next=p->next;
            free(p);
        }
    }
    else
    {
        printf("Value not found in the list\n");
    }
    }
}

//.....................................................................................
void inverse(list**H,list**H2)
{
   *H2=NULL;
   list*p;
    p=*H;
    while(p!=NULL)
    {
     insert_begin(p->value,H2); 
     p=p->next;
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
    printf("enter a number to find :");
    int f;
    scanf("%d",&f);
    check(&head,find(&head,f));
    printf("Enter a value to delete:");
    int d;
    scanf("%d",&d);
    delete(&head,d);
    display(&head);
    list *head2;
    inverse(&head,&head2);
    printf("here is the inversed list");
    display(&head2);
    printf("\n");

return 0;
}