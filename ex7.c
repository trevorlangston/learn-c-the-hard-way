#include<stdio.h>

int main(int argc, char* argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 5679.432;
    char initial = 'A';
    char first_name[] = "Zed";
    char last_name[] = "Shaw";

    printf("You are %d miles away\n", distance);
    printf("You have %f levels of power\n", power);
    printf("You have %f awesome super powers\n", super_power);
    printf("I have the %c initial\n", initial);
    printf("My first name is %s\n", first_name);
    printf("My last name is %s\n", last_name);
    printf("My whole name is %s %c. %s\n", first_name, initial, last_name);

    int bugs = 10;
    double bug_rate = 1.23;
    double expected_bugs = bugs * bug_rate;
    long universe_of_defects = 1L * 1024L * 1024L * 1024L;
    double part_of_universe = expected_bugs / universe_of_defects;
    char null_byte = '\0';

    printf("You have %d bugs at the rate of %f\n", bugs, bug_rate);
    printf("The entire universe has %ld bugs\n", universe_of_defects);
    printf("You are expected to have %f bugs\n", expected_bugs);
    printf("That is only a %e portion of the universe.\n", part_of_universe);
    printf("Which means you should care %d%%\n", null_byte);

    return 0;
}
