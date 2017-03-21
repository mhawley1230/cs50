#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Minutes: ");
    int minutes = get_int();
    float gallons = 1.5 * minutes;
    int ounces = 128 * gallons;
    printf("Bottles: %i\n", ounces / 16);
}