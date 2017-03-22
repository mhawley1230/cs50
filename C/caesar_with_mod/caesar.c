#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // error for incorrect number of command-line arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar k");
        return 1;
    }
       
    printf("plaintext: ");
    string s = get_string();
    
    printf("ciphertext: ");
    
    // convert string argv[1] to int
    int k = atoi(argv[1]);
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        char l = s[i];
        // if letter is capital
        if (l >= 'A' && l <= 'Z')
        {
            // condition for wrapping capital alphabet
            while (l + k > 'Z')
            {
                l -= 26;
            }
            printf("%c", l + k);
        }
        // if letter is lowercase
        else if (l >= 'a' && l <= 'z')
        {
            // condition for wrapping lowercase alphabet
            while (l + k > 'z')
            {
                l -= 26;
            }
            printf("%c", l + k);
        }    
        else
        {
            printf("%c", l);
        }
    }
    printf("\n");
}