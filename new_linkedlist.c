#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node* head=malloc(sizeof(struct node));
    head->data=75;
    head ->next=NULL;

    struct node* sec=malloc(sizeof(struct node));
    sec->data=65;
    sec ->next=NULL;
    head->next=sec;

    struct node* third=malloc(sizeof(struct node));
    third->data=80;
    third ->next=NULL;
    sec->next=third;
   

    // 90 insert at beginig
    struct node* new_value=malloc(sizeof(struct node));
    new_value->data=90;
    new_value ->next=head;
    head=new_value;

    // 85 & 89 insert in end 


    struct node*fifth =malloc(sizeof(struct node));
    fifth->data=85;
    fifth ->next=NULL;

    struct node* sixth=malloc(sizeof(struct node));
    sixth->data=89;
    sixth ->next=NULL;
    fifth->next=sixth;

    struct node*insert_new=head;
    while(insert_new->next!=NULL)
    {
         insert_new=insert_new->next;
    }

      insert_new->next=fifth;

    //delete 90 
    struct node* del_90=head;
    head=head->next;
    free(del_90);

    struct node*ptr=head;

    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
     
    free(ptr->next);
    ptr->next=NULL;

    struct node*new_15=malloc(sizeof(struct node));
    new_15->data =15;
    new_15->next=NULL;

    struct node*find_Null=head;

    while(find_Null->next!=NULL)
    {
        find_Null=find_Null->next;

    }
    find_Null->next=new_15;

    struct node*trvs=malloc(sizeof(struct node));
    trvs=head;

    while(trvs!=NULL)
    {
        printf("%d ",trvs->data);
        trvs=trvs->next;
    }





}
