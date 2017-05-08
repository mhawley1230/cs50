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
    head = current = list;
    struct node *another = (struct node*)malloc(sizeof(struct node));
    another->data = 7;
    list->next = another;
    current = current->next;
    printf("%d\n", current->data);
}