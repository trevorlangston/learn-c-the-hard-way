#include<stdio.h>

int main(int argc, char *argv[])
{
    int ages[] = {5, 79, 43, 25, 1, 65};
    char *names[] = {"Joe", "Sammy", "Tommy", "Timmy", "Mickey", "Sarah"};

    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    for (i = count; i-- > 0;)
    {
        printf("%s has been alive %d years\n", names[i], ages[i]);
    }

    printf("\n");

    int *foo = &ages[1];
    char **bar = names + 1;

    printf("%d\n", *foo);
    printf("%s\n", *bar);

    printf("\n");

    int *cur_age = ages;
    char **cur_name = names;

    for (i = 0; i < count; i++)
    {
        printf("%s has been alive %d years\n", *(cur_name + i), *(cur_age + i));
    }

    printf("\n");

    for (i = 0; i < count; i++)
    {
        printf("%s has been alive %d years\n", cur_name[i], cur_age[i]);
    }

    return 0;
}
