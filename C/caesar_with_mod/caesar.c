#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define ALPHABET_LENGTH 26
#define START_OF_UPPER_ALPHABET 65
#define START_OF_LOWER_ALPHABET 97

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar k");
        return 1;
    }
       
    printf("plaintext: ");
    string s = get_string();
    
    printf("ciphertext: ");
    int k = atoi(argv[1]);

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        char l = s[i];
        int offset = 0;
        if (isalpha(l))
        {
            if (l >= START_OF_UPPER_ALPHABET && l <= START_OF_UPPER_ALPHABET + ALPHABET_LENGTH)
            {
                offset = l - START_OF_UPPER_ALPHABET;
                l = (offset + k)  % ALPHABET_LENGTH;
                printf("%c", l + START_OF_UPPER_ALPHABET);
            } 
            else
            {
                offset = l - START_OF_LOWER_ALPHABET;
                l = (offset + k)  % ALPHABET_LENGTH;
                printf("%c", l + START_OF_LOWER_ALPHABET);
            }
        }
        else
        {
            printf("%c", l);
        }
    }
    printf("\n");
}