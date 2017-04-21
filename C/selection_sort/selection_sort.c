#include <cs50.h>
#include <stdio.h>
#define LIMIT 6

void selection_sort(int array[]);

int main(void)
{
    int arr[LIMIT] = {2, 5, 1, 3, 6, 4};
    selection_sort(arr);
}

void selection_sort(int array[])
{
    int min_index, i, j;
    for (i = 0; i < LIMIT - 1; i++)
    {
        // set minimum index to current index
        min_index = i;
        
        // search through array to find lowest value
        for (j = i + 1; j < LIMIT; j++)
        {
            if(array[j] < array[min_index])
            {
                min_index = j;
            }
        }
        
        if(min_index != i) 
        {
            // swap the numbers 
            int temp = array[min_index];
            array[min_index] = array[i];
            array[i] = temp;
        }
    }
    
    for (i = 0; i < LIMIT; i++)
    {
        printf("%i\n", array[i]);
    }
}