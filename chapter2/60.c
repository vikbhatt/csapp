#include <stdio.h>

typedef unsigned char* byte_pointer;

unsigned replace_byte(unsigned x, int i, unsigned char b){
    int itimes8 = i << 3; // i * 2^3
    unsigned mask = 0xFF << itimes8;
    return (x & ~mask) | (b << itimes8);
}

int main(int argc, char const *argv[])
{
    /* code */
    printf("%x\n", replace_byte(0x12345678, 2, 0xAB));
    printf("%x\n", replace_byte(0x12345678, 0, 0xAB));
    return 0;
}
