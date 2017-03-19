#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long long card_number = 0;
    
    do
    {
        printf("Number: ");
        card_number = get_long_long();
    }
    while (card_number <= 0);
}

