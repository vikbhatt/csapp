#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]){
    printf("is little endian ? --- %d",is_little_endian());
}

int is_little_endian(){
    int x = 0x0001; 
    return !(*((unsigned char *) &x));
}
