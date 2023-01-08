#include <stdio.h>
int fits_bits(int x, int n){
    int shift = (sizeof(int) << 3) - n;
    return ((x << shift) >> shift) == x;
}

int main(int argc, char const *argv[])
{
    printf("%d\n", fits_bits(0xFF, 9));
    return 0;
}
