#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int8_t foo = 2;
    char bar = ' ';
    uint8_t bizz = 1;

    bizz <<= 2;

    printf("converting negative char %d to uint64 %llu\n", bar, (uint64_t)bar);
    printf("the total is %llu\n", (uint64_t)foo * (uint64_t)bar);

    printf("the max number of bits in int8 is %d\n", INT8_MAX);
    printf("the max number of bits in uint8 is %d\n", UINT8_MAX);

    printf("the number of bits in bizz is %lu\n", sizeof(bizz ^ 100));

    printf("the max number of bits in uintptr_t is %lu\n", UINTPTR_MAX);


    return 0;
}
