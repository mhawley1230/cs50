#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    printf("Input string: ");
    string s = get_string();
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isalpha(s[i]))
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}