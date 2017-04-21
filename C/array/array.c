#include <cs50.h>
#include <stdio.h>

#define LIMIT 100

int main(void)
{
    int arr[LIMIT + 1];
    for(int i = 0; i < LIMIT + 1; i++)
    {
        arr[i] = 0;
        printf("Element %d is %d\n", i, arr[i]);
    }
}