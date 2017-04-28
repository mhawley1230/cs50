#include <cs50.h>
#include <stdio.h>

#define ROW 3
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
    
    
    for (int row = 0; row < ROW; row++)
    {   
        for (int y = 0; y < SCALE; y++)
        {
            for (int col = 0; col < COL; col++)
            {
                for (int x = 0; x < SCALE; x++)
                {
                    printf(" %i ", arr[row][col]);
                }
            }
            printf("\n");
        }
    }
}
