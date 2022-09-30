#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Input get_int to a value
    int x = get_int("x: ");

    int y = get_int("y: ");
    // X and Y comparison
    if (x < y)
    {
        printf("X is less than Y\n");
    }
    else if (x > y)
    {
        printf("X is more than Y\n");
    }
    else
    {
        printf("X is same of Y\n");
    }
}