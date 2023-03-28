#include <stdio.h>
struct node{
  int data;
  struct node *next;

};
struct node *head,*newnode,*temp;
//ptr=malloc(cast_type*sizeof(data type))
//malloc-allocates memory dynamycally  and creates a new node
newnode=malloc(sruct node*sizeof(struct node));
head=0;int choice;
printf("Enter data:/n");
scanf("%d",&newnode->data)
newnode->next=0;
 while(choice){
 if(head==0){
     head=temp=newnode;
 }
 else{
     temp->next=newnode;
     temp=newnode;

 }
 printf("Do you want to continue?(0/1)");
 scanf("%d",&choice);
}
temp=head;
while(temp!=0){
    printf("%d",temp->data);
    temp=temp->next
}


}
