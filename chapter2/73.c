#include <stdio.h>

int saturating_add(int x, int y){
    int sum =  x + y;
    int shift = (sizeof(int)<<3)-1;
    int xneg_mask = (x >> shift);
    int 
}