#include <stdio.h>
#include <limits.h>
int tsub_ok(int x, int y){
    int diff = x-y;
    int pos_overflow = x < 0 && y >=0  && diff >= 0;
    int neg_overflow = x >= 0 && y < 0 && diff <= 0;
    return !(pos_overflow || neg_overflow);
}

int main(int argc, char const *argv[])
{
    /* code */
    printf("%d", tsub_ok(INT_MIN, INT_MAX));
    return 0;
}
