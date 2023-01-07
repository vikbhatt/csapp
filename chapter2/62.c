#include <stdio.h>

int int_shifts_are_arithmetic(){
    int minus_one = ~0;
    return !((minus_one >> 1) ^ (minus_one));
    // return (minus_one >> 1) > 0; 
}

int main(int argc, char const *argv[])
{
    printf("%d", int_shifts_are_arithmetic());
    return 0;
}
