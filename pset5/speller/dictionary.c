/**
 * Implements a dictionary's functionality.
 */

#include <stdio.h>
#include <stdbool.h>
#include <cs50.h>

#include "dictionary.h"

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
    FILE *file = fopen(dictionary, "r");
    char word[LENGTH];
    
    if (file == NULL)
    {
        fprintf(stderr, "Could not open file.\n");
        return 1;
    }
    
    while (fscanf(file, "%s", word) != EOF)
    {
        printf("%s\n", word);
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
