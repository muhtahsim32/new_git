#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node* next;
};
int main(){
    struct node *head=malloc(sizeof(struct node));
    head->data=34;
    head->next=NULL;


    struct node *sec=malloc(sizeof(struct node));
    sec->data=45;
    sec->next=NULL;
    head->next=sec;

    struct node*third=malloc(sizeof(struct node));
    third->data=55;
    third->next=NULL;
    sec->next=third;
    
    struct node*new=malloc(sizeof(struct node));
    new->data=65;
    new->next=head;
    head=new;

    struct node *ptr=malloc(sizeof(struct node));
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }



}