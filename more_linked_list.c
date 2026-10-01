#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
};
int main(){
    struct node*head=malloc(sizeof(struct node));
    head->data=55;
    head->next=NULL;

    struct node*sec=malloc(sizeof(struct node));
    sec->data=65;
    sec->next=NULL;
    head->next=sec;

    struct node*third=malloc(sizeof(struct node));
    third->data=75;
    third->next=NULL;
    sec->next=third;



    // new 80 & 85  insert 
     
    struct node*in_80=malloc(sizeof(struct node));
    in_80->data=80;
    in_80->next=NULL;

    
    struct node*in_85=malloc(sizeof(struct node));
    in_85->data=85;
    in_85->next=NULL;
    in_80->next=in_85;




    struct node*ptr=malloc(sizeof(struct node));
    ptr=head;

    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }

    ptr->next=in_80;

    ptr=head;

    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    free(ptr->next);
    ptr->next=NULL;


    struct node*in_21=malloc(sizeof(struct node));
    in_21->data=21;
    in_21->next=head;
    head=in_21;

    int position=6,current_index=1;
    ptr=head;
    struct node*in_52_6=malloc(sizeof(struct node));
    in_52_6->data=52;
    in_52_6->next=NULL;

    if(position==1)
    {
        in_52_6->next=head;
        head=in_52_6;
    }else{
    while(current_index<position-1 && ptr!=NULL)
    {
       ptr=ptr->next;
       current_index++;
    }
    in_52_6->next=ptr->next;
    ptr->next=in_52_6;

    ptr=head;
    head=head->next;
    free(ptr);
   
    struct node*in_50=malloc(sizeof(struct node));
    in_50->data=50;
    in_50->next=NULL;

    struct node*in_56=malloc(sizeof(struct node));
    in_56->data=56;
    in_56->next=NULL;
    in_50->next=in_56;

    ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=in_50;


    ptr=head;

    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }





}






}