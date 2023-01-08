#include <stdio.h>
#include <limits.h>

int leftmost_one(unsigned x){
    if(x == 0) return 0;
    x = (x >> 16) | x;
    x = (x >> 8) | x;
    x = (x >> 4) | x;
    x = (x >> 2) | x;
    x = (x >> 1) | x;
    return x ^ (x >> 1);
}

int main(int argc, char const *argv[])
{
    printf("0x%.2x \n", leftmost_one(0xFF00));
    printf("0x%.2x \n", leftmost_one(0X6600));

    return 0;
}
