#include <stdio.h>
#include <cs50.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main()
{
    //getting input string and initializing its length variable n
    string s = get_string("Msg: ");
    int n = strlen(s);

    //initializing and creating array of integers converted from string characters
    int num[n];
    for (int i = 0; i < n; i++)
    {
        num[i] = s[i];
    }

    //initializing array to store our binary number
    char bin[BITS_IN_BYTE];
    //initializing middle and temp values that we'll use to reverse the bin num array
    int middle = BITS_IN_BYTE / 2;
    char temp;

    //main for loop going for the length of the input string n
    for (int i = 0; i < n; i++)
    {
        //nested for loop to populate our bin num array
        //dividing
        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            bin[j] = num[i] % 2;
            num[i] = num[i] / 2;
        }

        //reversing our binary num array by finding the middle first
        //then swapping values from beginning to end
        for (int k = 0; k < middle; k++)
        {
            temp = bin[k];
            bin[k] = bin[8 - k - 1];
            bin[8 - k - 1] = temp;
        }

        //printing each separate bit using already implemented function
        for (int l = 0; l < 8; l++)
        {
            print_bulb(bin[l]);
        }

        printf("\n");
    }
}

//functions

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
