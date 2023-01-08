#include <stdio.h>


typedef unsigned packed_t;
int xbyte(packed_t word, int bytenum){
       int x = word << ((3-bytenum) << 3);
       return x >> 24;
}

int main(int argc, char const *argv[])
{
    printf("%.2x %.2x \n", 0x123456, xbyte(0x123456, 1));
    return 0;
}
