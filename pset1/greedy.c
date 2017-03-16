#include <cs50.h>
#include <stdio.h>

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
    
    int remainder = change * 100;
    printf("%.2f times 100 = %i\n", change, remainder);
    
    while (remainder >= quarter)
    {
        coin_count++;
        remainder -= quarter;
        printf("Quarter subtracted, %i remaining\n", remainder);
    }
    
    while (remainder >= dime)
    {
        coin_count++;
        remainder -= dime;
        printf("Dime subtracted, %i remaining\n", remainder);
    }
    
    while (remainder >= nickel)
    {
        coin_count++;
        remainder -= nickel;
        printf("Nickel subtracted, %i remaining\n", remainder);
    }
    
    while (remainder >= penny)
    {
        coin_count++;
        remainder -= penny;
        printf("Penny subtracted, %i remaining\n", remainder);
    }
    
    printf("%i\n", coin_count);
}