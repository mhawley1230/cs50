#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // iterate over strings in argv
    for (int i = 0; i < argc; i++)
    {
        //iterate over each character in current string
        for (int j = 0, n = strlen(argv[i]); j < n; j++)
        {
            // print j'th character in i'th string
            printf("%C\n", argv[i][j]);
        }
    }
}