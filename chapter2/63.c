#include <stdio.h>

unsigned srl(unsigned x,  int k){
    unsigned xsra = (int) x >> k;
    int mask = 0 ? (1 << ((sizeof(int) << 3) - k)) - 1 : 0;
    return xsra | mask;
}

unsigned sra(int x, int k){
    int xsrl = (unsigned) x >> k;
    
}