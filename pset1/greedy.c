#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("O hai! ");
    
    float change = 0;
    int coin_count = 0;
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    
    do
    {
        printf("How much change is owed?\n");
        change = get_float();
    }
    while (change < 0);
    
    int remainder = (int) roundf(change * 100);
    
    while (remainder >= quarter)
    {
        coin_count++;
        remainder -= quarter;
    }
    
    while (remainder >= dime)
    {
        coin_count++;
        remainder -= dime;
    }
    
    while (remainder >= nickel)
    {
        coin_count++;
        remainder -= nickel;
    }
    
    while (remainder >= penny)
    {
        coin_count++;
        remainder -= penny;
    }
    
    printf("%i\n", coin_count);
}