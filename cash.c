#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollars;

    do
    {
        // Prompt users to get input
        dollars = get_float("Change owed: ");

    }
    // Accept only non-negative input
    while (dollars < 0);

    // convert dollars to cents P.S. 1 dollar = 100 cents
    // 1. multiply dollars by 100
    // 2. round cents to nearest penny
    int cents = round(dollars * 100);  // round() from <math.h>

    int coinsUsed = 0;

    int quarters = 25;
    int dimes = 10;
    int nikels = 5;
    int pennies = 1;

    // WHILE we can use quarters, add a quarter
    while (cents >= quarters)
    {
        // keep track of remaining change owed
        cents = cents - quarters;
        // keep track of how many coins uesed
        coinsUsed = coinsUsed + 1;
    }


    // WHILE we can use dimes, add a dime
    while (cents >= dimes)
    {
        cents = cents - dimes;
        coinsUsed = coinsUsed + 1;
    }
    
    // WHILE we can use nikels, add a nikel
    while (cents >= nikels)
    {
        cents = cents - dimes;
        coinsUsed = coinsUsed + 1;
    }

    // WHILE we can use pennies, add a penny
    while (cents >= pennies)
    {
        cents = cents - dimes;
        coinsUsed = coinsUsed + 1;
    }

    // print the result, using %i placeholder
    printf("%i number of coins are needed\n", coinsUsed);

}
