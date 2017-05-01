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
    
    char *buffer = NULL;
    while(fread(buffer, 1, 512, argv[1]))
    {
        printf("block of size 512 found");
    }

    return 0;
}