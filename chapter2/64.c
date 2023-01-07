#include <stdio.h>
int any_odd_one(unsigned x){
    return (x & 0xAAAAAAAA) != 0;
}

int main(int argc, char const *argv[])
{
    printf("%d\n", any_odd_one(0xAA));
    printf("%d\n", any_odd_one(0x55));
    return 0;
}
