#include <stdio.h>

unsigned rotate_left(unsigned x, int n){
    unsigned y = x << n;
    unsigned mask =  x >> ((sizeof(int) << 3) - n);
    return y | mask;
}

int main(int argc, char const *argv[])
{
    /* code */
    printf("0x%.2x \n", rotate_left(0x12345678, 4));
    printf("0x%.2x \n", rotate_left(0x12345678, 20));

    return 0;
}
