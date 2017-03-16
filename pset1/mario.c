#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        printf("Height: ");
        height = get_int();
    }
    while (height < 1 || height > 23);
    
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height; j++)
        {
            // printf("height: %i, i: %i j: %i\n", height, i, j);
            if (i + j < height - 1)
            {
                printf(" ");
            } 
            else 
            {
                printf("#");
            }
        }
        
        printf ("  ");
        
        for (int k = 0; k < height; k++)
        {
            if (height - k > 4)
            printf("#");
        }
        printf("\n");
    }
}