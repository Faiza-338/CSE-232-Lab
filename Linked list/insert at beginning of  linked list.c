#include <stdio.h>
#include <stdlib.h>

// Creating a node
struct node {
  int value;
  struct node *next;
};

void insertstart(struct node **head){

//creating a new node and allocating memory
struct node *newnode=(struct node*)malloc(sizeof(struct node))

newnode->value=value;
newnode->next=*head;

//initializing newnode as the head
*head=newnode;

}








// print the linked list value
void display(struct node *node) {
  while (node!= NULL) {
    printf("%d\n", node->value);
    node = node->next;
  }
}

int main() {
  // Initialize nodes
  struct node *head=NULL;
  struct node *one = NULL;
  struct node *two = NULL;
  struct node *three = NULL;

  // Allocate memory
  head=(struct node*)malloc(sizeof(struct node))
  one = (struct node*)malloc(sizeof(struct node));
  two = (struct node*)malloc(sizeof(struct node));
  three = (struct node*)malloc(sizeof(struct node));

  // Assign value values
  head->value=15;
  one->value = 16;
  two->value = 26;
  three->value = 3;

  // Connect nodes
  head->next=one;
  one->next = two;
  two->next = three;
  three->next = NULL;

  printf("Linked list:\n");
  display(head);

  //using "&" because we want to insert in this position
  insertstart(&head,40);

  printf("After inserting at beginning:\n");

  // printing node-value
  //no need for '&' since we're not inserting at any position
  //we just need to display the newly made node
  display(head);

  return 0;
}
