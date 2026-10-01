#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
int main(){
    struct node*head=malloc(sizeof(struct node));
    head->data=45;
    head->next=NULL;

    struct node*sec=malloc(sizeof(struct node));
    sec->data=55;
    sec->next=NULL;
    head->next=sec;

    struct node*third=malloc(sizeof(struct node));
    third->data=65;
    third->next=NULL;
    sec->next=third;
  

    //insertion at end

    struct node*fourth=malloc(sizeof(struct node));
    fourth->data=70;
    fourth->next=NULL;

    struct node*fifth=malloc(sizeof(struct node));
    fifth->data=85;
    fifth->next=NULL;
    fourth->next=fifth;

    struct node* ptr= head;
    
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=fourth;

  //delete head;
  struct node*dlt=head;
  head=head->next;
  free(dlt);

  // end dlt
  struct node* find_last_value=malloc(sizeof(struct node));
  find_last_value=head;
  struct node*prev=NULL;
   
  while(find_last_value->next!=NULL)
  {
    prev=find_last_value;
    find_last_value=find_last_value->next;

  }

  if(find_last_value!=NULL)
  {
    find_last_value->next=NULL;
  }
  else{
    head=NULL;
  }
  prev->next=NULL;
  free(find_last_value);

// insert at begining repeat

struct node*newvalue=malloc(sizeof(struct node));
newvalue->data=95;
newvalue->next=head;
head=newvalue;

struct node*travarse=malloc(sizeof(struct node));
travarse=head;
while(travarse!=NULL)
{
    printf("%d ",travarse->data);
    travarse=travarse->next;

}



}