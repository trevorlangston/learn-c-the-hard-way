#include<stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Missing argument");

        return 1;
    }

    for (int i = 1; i < argc; i++)
    {
        int j = 0;
        while (argv[1][j] != '\0')
        {
            printf("arg %d, char %d: %c\n", i, j, argv[i][j]);
            j++;
        }
    }

    return 0;
}
