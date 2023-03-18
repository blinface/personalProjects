#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//adding function prototypes at top
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string input = get_string("Text: ");

    int letterCount = count_letters(input);
    int wordCount = count_words(input);
    int sentenceCount = count_sentences(input);

    // L = avg num of letters per 100 words
    float L = (float) letterCount / (float) wordCount * 100.0;
    // S = avg num of sentences per 100 words
    float S = (float) sentenceCount / (float) wordCount * 100.0;

    float colemanLiauIndex = 0.058 * L - 0.296 * S - 15.8;

    if (colemanLiauIndex >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (colemanLiauIndex < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        //rounding index up and removing decimal places in the float
        printf("Grade %.f\n", ceil(colemanLiauIndex));
    }

}

// implementing function to count letters in input
int count_letters(string text)
{
    int letterCount = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        // condition if character is alphabetic and is not a space
        if (isalpha(text[i]) && text[i] != '\0')
        {
            letterCount++;
        }
        // if character is not in alphabet or space we skip it
        else continue;
    }

    return letterCount;
}

// implementing function to count words
int count_words(string text)
{
        int wordCount = 1; //there will be at least 1 word
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        // probably not the best way, but I just counted spaces
        if (isspace(text[i]))
        {
            wordCount++;
        }
        else continue;
    }

    return wordCount;

}

int count_sentences(string text)
{
    int sentenceCount = 0; //there will be at least 1 sentence
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentenceCount++;
        }
        else continue;
    }

    return sentenceCount;
}
