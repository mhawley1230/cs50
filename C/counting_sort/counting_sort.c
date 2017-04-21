#include <cs50.h>
#include <stdio.h>

#define LIMIT 5

int main(void)
{
    int arr[LIMIT + 1];
    int nums[6] = {4, 1, 2, 3, 1, 4};
    
    for(int i = 0; i < LIMIT + 1; i++)
    {
        arr[i] = 0;
    }
    
    for(int i = 0; i < (sizeof(arr)/sizeof(int)); i++)
    {
        arr[nums[i]]++;
    }
    
    // printf("%lu", sizeof(nums)/sizeof(int));
}

// // set an array from 0 to LIMIT, inclusive
// int numbers[LIMIT + 1];

// // for each index of count, set index to 0
// for (int i = 0; i < LIMIT + 1; i++)
// {
//     numbers[i] = 0;
//     printf("Element[%d] = %d\n", i, numbers[i] );
// }

// // for n number of times
// for (int i = 0; i < n; i++)
// {
//     // for each value in values[], increment the index of that value in numbers[]
//     numbers[values[i]]++;
// }
// return;

// // sort values 

// // for the length of numbers[] times
// for (int i = 0; i < (sizeof(num)/sizeof(int)))
// {
    
// }