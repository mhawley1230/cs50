#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2 || argv == NULL)
    {
        printf("Usage: ./recover image\n");
        return 1;
    }
    
    char *infile = argv[1]; 
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }

    return 0;
}