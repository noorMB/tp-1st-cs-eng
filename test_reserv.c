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

// Recursive function to find max
int findMax(list** h) 
{
list*p;
*h=p;

// Base case: last node
if (p->next == NULL) 
{
return p->value;
}
// Recursive call
int maxRest = findMax(p->next);
// Compare current with max of rest
return (p->value > maxRest) ? p->value: maxRest;
}



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
int max=findMax(&head);
printf("the max value of this list: %d",max);


return 0;
}