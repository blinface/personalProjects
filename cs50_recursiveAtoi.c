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

    // Finding index of last character in string
    int lastIndex = strlen(input) - 1;

    // Converting the last character of string to int
    int lastChar = atoi(&input[lastIndex]);

    // Remove the last character in string
    input[strlen(input) - 1] = '\0';

    // Returning the int value of last char + 10 times value of shortened string
    return lastChar + (10 * atoi(input));

    // Calling convert function recursively on the shortened string
    convert(input);

}
