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
