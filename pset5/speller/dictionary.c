/**
 * Implements a dictionary's functionality.
 */

#include <stdio.h>
#include <stdbool.h>
#include <cs50.h>
#include <string.h>

#include "dictionary.h"

// global variables
struct node *head = NULL;

/**
 * Returns true if word is in dictionary else false.
 */
bool check(const char *word)
{
    // TODO
    return false;
}

/**
 * Loads dictionary into memory. Returns true if successful else false.
 */
bool load(const char *dictionary)
{
    char current_word[LENGTH + 1];
    // open dictionary
    FILE *file = fopen(dictionary, "r");
    
    // first node pointer for head of linked list
    struct node *first = malloc(sizeof(node));
    head = first;
    
    while (fscanf(file, "%s", current_word) != EOF)
    {
        // malloc new node
        struct node *new_node = malloc(sizeof(node));
        
        // copy word to node
        strcpy(new_node->word, current_word);
        
        // append to beginning of list
        new_node->next = head;
        head = new_node;
        printf("%s\n", new_node -> word);
    }
    
    return false;
}

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void)
{
    // TODO
    return 0;
}

/**
 * Unloads dictionary from memory. Returns true if successful else false.
 */
bool unload(void)
{
    // TODO
    return false;
}
