#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string();
    
    if (s != NULL)
    {
        // iterate over string
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            // if the first character is a letter, print the capital
            if (i == 0 && s[0] != ' ')
            {
                printf("%c", toupper(s[0]));
            }
            
            // look for leading spaces for new words
            if (s[i] == ' ' && s[i + 1] != ' ')
            {
                // removes '\0' characters from being printed
                if (s[i + 1] != '\0')
                {
                    // prints the first letter after a space
                    printf("%c", toupper(s[i + 1]));
                }
            }
        }
        printf("\n");
    }
}