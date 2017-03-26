#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ALPHABET_LENGTH 26
#define START_OF_UPPER_ALPHABET 65
#define START_OF_LOWER_ALPHABET 97

int encrypt(string key);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar k");
        return 1;
    }
    
    encrypt(argv[1]);
    printf("\n");
}

int encrypt(string key)
{
    printf("plaintext: ");
    string s = get_string();
    
    // int input_letter_offset = 0;
    // int key_offset = 0;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        int key_letter_position = 0;
        char c = s[i];
        if (isalpha(c))
        {
            if (key_letter_position < strlen(key))
            {
                key_letter_position++;
            }
            else
            {
                key_letter_position -= strlen(key);
            }
            
            printf("the %i'th letter of the key string is %c\n", key_letter_position, key[i]);
            if (c >= START_OF_UPPER_ALPHABET && c <= START_OF_UPPER_ALPHABET + ALPHABET_LENGTH)
            {
                // key_offset = toupper(key[i]) - START_OF_UPPER_ALPHABET;
                // input_letter_offset = c - START_OF_UPPER_ALPHABET;
                // printf("%c is going to be added to %c", key_offset, input_letter_offset);
                // c = (key_offset + input_letter_offset) % ALPHABET_LENGTH;
                // printf("%c", c + START_OF_UPPER_ALPHABET);
            }
        }
        else
        {
            printf("%c", c);
        }
    }
    
    return 0;
}