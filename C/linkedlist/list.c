#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// create struct for nodes in linked list
typedef struct node {
   int data;
   struct node *next;
}
node;

// declare functions to interact with list
bool search(node* head, int val);

// set head node to NULL to keep track of first element in list
struct node *head = NULL;

// set current to NULL to create a pointer to current node
struct node *current = NULL;

int main(void)
{
    // malloc first node
    struct node *list = (struct node*)malloc(sizeof(struct node));
    
    // set first node data
    list->data = 6;
    
    // first node isn't pointing at anything
    list->next = NULL;
    
    // set global pointers to first element
    head = current = list;
    
    // new node
    struct node *another = (struct node*)malloc(sizeof(struct node));
    
    // new node's data
    another->data = 7;
    
    // // set first node to point to new node
    // list->next = another;
    
    // // change what current is pointing at, while still keeping track of head
    // current = current->next;
    
    printf("head node's value is %d\n", head->data);
    printf("element 1's value is %d\n", current->data);
    
    // search for an element
    if (search(list, 7))
    {
        printf("element found");
    }
    else
    {
        printf("element not found");
    }
}

bool search(node* head, int val);
{
    
}