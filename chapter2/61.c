#include <stdio.h>

int any_bit_1(int x){
    return !!x;
}

int any_bit_0(int x){
    return !!(~x);
}

int any_bit_lsb_1(int x){
    int mask = 0xFF;
    return any_bit_1(x & mask);
}

int any_bit_msb_0(int x){
      int mask = 0xFF << ((sizeof(int) - 1) << 3);
    return any_bit_0(x & mask); 
}

int main(int argc, char const *argv[])
{
    
    printf("%d \n", any_bit_1(0));
    printf("%d \n", any_bit_1(0xFF));
    printf("%d \n", any_bit_msb_0(0xFF));
    printf("%d \n", any_bit_msb_0(~0));

    return 0;
}
