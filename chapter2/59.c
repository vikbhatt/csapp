#include <stdio.h>

typedef char* word;

int replace_bytes(int x, int y){
  return (x & 0xFF) | (y & ~0xFF);
}

int main(int argc, char const *argv[])
{
    /* code */
    printf("0x%X", replace_bytes(0x89ABCDEF, 0x76543210));
    return 0;
}




