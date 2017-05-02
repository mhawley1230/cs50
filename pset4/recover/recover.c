#include <stdio.h>
#include <stdint.h>
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
    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", argv[1]);
        return 2;
    }
    
    uint8_t buffer[512];
    int jpgcount = 0;
    // bool jpgfound = false;
    
    while(fread(buffer, 512, 1, file) == 1)
    {   
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            jpgcount++;
            // jpgfound = true;
        }
    }
    printf("%i jpgs found\n", jpgcount);

    return 0;
}