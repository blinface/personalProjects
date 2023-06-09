#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);
char rotate(char c, int key);

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else if (only_digits(argv[1]) == false)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int key = atoi(argv[1]); //atoi() function converts str to int

    string plaintext = get_string("plaintext:  "); //prompt user for plaintext
    int n = strlen(plaintext);

    printf("plaintext: %s", plaintext);
    printf("ciphertext: ");
    int ciphertext[n];
    for (int i = 0; i < n; i++) //for each character in plaintext, rotate character by key
    {
        printf("%c", rotate(plaintext[i], key));
    }
    printf("\n");
}

//function to check if input is digit-only
bool only_digits(string s)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isdigit(s[i]))
        {
            continue;
        }
        else return false;
    }
    return true;
}

//implementing function to rotate characters
char rotate(char c, int key)
{

    if (isalpha(c) && isupper(c))
    {
        c = (char)((c - 'A' + key) % 26 + 'A'); // looping characters in A..Z
        return c;
    }
    else if (isalpha(c) && islower(c))
    {
        c = (char)((c - 'a' + key) % 26 + 'a'); // looping characters in A..Z
        return c;
    }
    else
    {
        return c;
    }

}

