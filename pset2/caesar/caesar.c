#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        eprintf("Usage: ./caesar k");
        return 1;
    }
    
    printf("plaintext: ");
    string s = get_string();
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (('A' <= s[i] && s[i] <= 'Z') ||
            ('a' <= s[i] && s[i] <= 'z'))
        {
            printf("%c", s[i + (int) argv[1]]);
        }
    }
}