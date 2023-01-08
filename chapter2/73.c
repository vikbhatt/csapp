#include <stdio.h>
#include <limits.h>

int saturating_add(int x, int y){
    int sum =  x + y;
    int shift = (sizeof(int)<<3)-1;
    int xneg_mask = (x >> shift);
    int yneg_mask = (y >> shift);
    int sum_mask = (sum >> shift);
    int pos_over_mask = ~xneg_mask & ~yneg_mask & sum_mask; // all 1s if positive overflow happens
    int neg_over_mask = xneg_mask & yneg_mask & ~sum_mask; // all 1s if negative overflow happens
    int over_mask = pos_over_mask | neg_over_mask; // all 1s if either negative or positive overflow happens
    // 
    return  (~over_mask & sum) | (pos_over_mask & INT_MAX) |  (neg_over_mask & INT_MIN);
}

int main(int argc, char const *argv[])
{
    printf("%.2x", saturating_add(INT_MAX, INT_MAX));
    return 0;
}
