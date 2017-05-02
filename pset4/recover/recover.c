#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // checking for correct argument usage
    if (argc != 2)
    {
        fprintf(stderr, "Usage: ./recover image\n");
        return 1;
    }
    
    // error
    char *infile = argv[1];
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }
    
    int *buffer[512];
    // int count = 0;
    while(fread(buffer, 1, 512, inptr))
    {
        fread(buffer, 1, 512, inptr);
        // count++;
        // printf("%i, block(s) of size 512 found\n", count);
    }

    return 0;
}