#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

bool valid(string password)
{
    bool upperLetter = false;
    bool lowerLetter = false;
    bool symbol = false;
    bool number = false;

    for (int i = 0, n = strlen(password); i < n; i++)
    {
        if (isupper(password[i]))
        {
            upperLetter = true;
        }
        else if (islower(password[i]))
        {
            lowerLetter = true;
        }
        else if (ispunct(password[i]))
        {
            symbol = true;
        }
        else if (isdigit(password[i]))
        {
            number = true;
        }
    }

    if (upperLetter == true && lowerLetter == true && symbol == true && number == true)
    {
        return true;
    }
    else return false;
}
