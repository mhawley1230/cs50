#include <cs50.h>
#include <stdio.h>

#define ROW 2
#define COL 3
#define SCALE 2

int main(void)
{
    int arr[ROW][COL];
    int count = 0;
    
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            count++;
            arr[i][j] = count;
            printf(" %i ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    
    for (int k = 0; k < ROW; k++)
    {   
        for (int n = 0; n < SCALE; n++)
        {
            for (int l = 0; l < COL; l++)
            {
                for (int m = 0; m < SCALE; m++)
                {
                    printf(" %i ", arr[k][l]);
                }
            }
            printf("\n");
        }
    }
}
