#include <stdio.h>

int lower_one_mask(int n){
    unsigned mask = ~0;
    mask = mask << n;
    return ~mask;
}

int main(int argc, char const *argv[])
{
    printf("%.2x \n" ,lower_one_mask(6));
    printf("%.2x \n" ,lower_one_mask(17));

    return 0;
}
