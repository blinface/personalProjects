#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(int argc, string argv[]);

int main(int argc, string argv[])
{
    if (argc < 1)
    {
        printf("at least one argument needed");
        return 1;
    }
    else
    {
        printf("%s \n", replace(argc, argv));
    }

}

string replace(int argc, string argv[])
{

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (argv[1][i] == 'a')
        {
            argv[1][i] = '6';
        }
        else if (argv[1][i] == 'e')
        {
            argv[1][i] = '3';
        }
        else if (argv[1][i] == 'i')
        {
            argv[1][i] = '1';
        }
        else if (argv[1][i] == 'o')
        {
            argv[1][i] = '0';
        }
    }

    return argv[1];

}
