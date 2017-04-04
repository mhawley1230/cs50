#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ALPHABET_LENGTH 26

int vigenere(string message, string key);

int main(int argc, string argv[])
{
    
    // if vigenere is ran with "./vigenere" or more than two functions
    if (argc != 2)
    {
        // give prompt to run correctly
        printf("Usage: ./vigenere s");
        
        // exit program
        return 1;
    }
    
    // set the key string to a variable
    string key = argv[1];
    
    // iterate through key to check for non-letter characters
    for(int i = 0, j = strlen(key); i < j; i++)
    {
        if (!isalpha(key[i]))
        {
            // give error message, abort
            printf("please only use alphanumeric letters in key");
            return 1;
        }
    }
    
    // prompt user for string to encrypt
    printf("plaintext: ");
    
    // get input string
    string s = get_string();
    vigenere(s, key);
    
    printf("\n");
    return 0;
}

int vigenere(string message, string key)
{
    printf("ciphertext: ");
    
    // get length of key
    int key_length = strlen(key);
    
    // iterate through each character in message, set counter to iterate through key
    for (int i = 0, key_counter = 0, n = strlen(message); i < n; i++)
    {
        // check for punctuation and spaces in message
        if (!isalpha(message[i]))
        {
            // return punctuation and spaces unchanged
            printf("%c", message[i]);
        }
        else
        {
            // use counter to get char in key, standardize and subtract offset to add
            char k = toupper(key[key_counter]) - 'A';
            
            // check if message[i] is upper or lower case
            if (isupper(message[i]))
            {
                // while loop to wrap upper case alphabet cyclically
                while (message[i] + k > 'Z')
                {
                    k -= ALPHABET_LENGTH;
                }
                // print upper case letter plus key character within upper case alphabet
                printf("%c", message[i] + k);
            }
            else
            {
                // while loop to wrap lower case alphabet cyclically
                while (message[i] + k > 'z')
                {
                    k -= ALPHABET_LENGTH;
                }
                // print lower case letter plus key character within lower case alphabet
                printf("%c", message[i] + k);
            }
            
            // cycle through characters in key only if using key to encrypt
            if (key_counter < key_length - 1)
            {
                key_counter++;
            }
            else
            {
                key_counter = 0;
            }
        }
    }
    return 0;
}