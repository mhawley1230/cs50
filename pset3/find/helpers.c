/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

// the upper limit of possible values generated
#define LIMIT 65536

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    
    // linear search
    // for (int i = 0; i < n; i++)
    // {
    //     if (value == values[i])
    //     {
    //         return true;
    //     }
    // }
    
    // binary search
    int first, last, middle;
    
    // first index, 0
    first = 0;
    // last index, length - 1
    last = n - 1;
    // average index
    middle = (first + last) / 2;
    
    while (first <= last)
    {
        
        if (values[middle == value])
        {
            return true;
        }
        else if (values[middle] < value)
        {
            first = middle + 1;
        }
        else if (values[middle] > value)
        {
            last = middle - 1;
        }
        else
        {
            break;
        }
        
        middle = (first + last) / 2;
    }
    
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    
    // bubble sort
    
    // set swap counter to non-zero number
    int swap_count = -1;
    
    // do n times
    for (int i = 0; i < n; i++)
    {
        // set swap_count to 0 every iteration
        swap_count = 0;
        
        // if two values next to each other are not in order
        if (values[i] < values[i + 1])
        {
            // swap lower numbers for higher numbers
            int temp = values[i];
            values[i] = values[i + 1];
            values[i + 1] = temp;
            
            //increment swap count
            swap_count++;
        }
        
        if (swap_count != 0)
        {
            sort(values, n - 1);
        }
    }
}
