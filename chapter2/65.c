#include <stdio.h>

int odd_ones(unsigned x){
    x = (x << 16)^x;
    x = (x << 8)^x;
    x = (x << 4)^x;
    x = (x << 2)^x;
    x = (x << 1 )^x;
    return (x & 1);
}

int main(int argc, char const *argv[])
{
    printf("%d", odd_ones(0xFF));
    return 0;
}
