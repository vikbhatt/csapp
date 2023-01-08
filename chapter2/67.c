#include <stdio.h>


int main(int argc, char const *argv[])
{
    
    int set_msb = 1 << 31;
    int beyond_msb = (0x2) << 31;

    printf("%d", set_msb && !beyond_msb);
    return 0;
}
