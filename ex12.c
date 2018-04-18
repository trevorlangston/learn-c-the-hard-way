#include<stdio.h>

int main(int argc, char *argv[])
{
    int areas[] = {1,2,3,4,5};
    char name[] = "Trevor";
    char full_name[] = {'T', ' ', 'L', 'a', 'n', 'g', '\0'};

    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas: %ld\n", sizeof(areas));
    printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));

    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name: %ld\n", sizeof(name));
    printf("The number of chars in name: %ld\n", sizeof(name) / sizeof(char));
    printf("The number of chars in full_name: %ld\n", sizeof(full_name) / sizeof(char));

    return 0;
}
