#include<stdio.h>

void crash()
{
    char *foo=NULL;
    int i = 0;

    for (i=0; i<1000; i++) {
        printf("bad %c", foo[i]);
    }
}

int main(int argc, char* argv[])
{
    /** int foo[4] = {0}; */
    /** char bar[3] = {'a'}; */
    /** char string[3] = {'a', 'b', 'c'}; */
    /** char *name = "zed"; */
    /** printf("testing foo: %d %d\n", foo[0], foo[1]); */
    /** printf("testing bar: %c %c\n", bar[0], bar[1]); */
    /** printf("testing string: %c %c\n", string[0], string[1]); */
    /** printf("testing name: %s\n", name); */

    crash();
}
