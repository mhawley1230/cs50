#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
        if (l >= 'A' && l <= 'Z')
        {
            while (l + k > 'Z')
            {
                l -= 26;
            }
            printf("%c", l + k);
        }
        else if (l >= 'a' && l <= 'z')
        {
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