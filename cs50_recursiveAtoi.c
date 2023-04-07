#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    // TODO
    if (input < 0)
    {
        return 1;
    }

    int lastIndex = strlen(input) - 1;
    int lastChar = atoi(&input[lastIndex]);

    input[strlen(input) - 1] = '\0';

    return lastChar + (10 * atoi(input));

    convert(input);

}
