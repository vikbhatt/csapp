#include <stdio.h>
#include <stdlib.h>

int is_little_endian(){
    int x = 0x0001; 
    char byte = *(unsigned char *)&x;
    return (*((unsigned char *) &x));
}

int main (){
    printf("little endian -- %d",is_little_endian());
}
