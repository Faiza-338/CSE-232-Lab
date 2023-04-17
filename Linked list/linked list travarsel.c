#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *newnode, *temp;//The main function starts by initializing the head pointer to NULL, indicating that the list is initially empty. It also declares two other pointers: newnode, which will be used to create new nodes, and temp, which will be used to traverse the list.
    int choice = 1;

    while (choice) {
        newnode = (struct node*)malloc(sizeof(struct node));//The code then enters a while loop that continues until the user enters 0 when prompted. Inside the loop, memory is allocated for a new node using the malloc function. The user is then prompted to enter data for the new node, which is stored in the data field of the new node.
        printf("Enter data:\n");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if (head == 0) {     //The next field of the new node is set to 0, indicating that it is currently the last node in the list. If the list is empty (i.e., if head is 0), then both head and temp are set to point to the new node. Otherwise, the next field of the current last node (pointed to by temp) is set to point to the new node, and temp is updated to point to the new node.
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue? (0/1)\n");
        scanf("%d", &choice);
    }

    temp = head;//After exiting the loop, the code enters another loop that traverses the list by following the next pointers from one node to the next. As it visits each node, it prints the data stored in that node.
    while (temp != 0) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
