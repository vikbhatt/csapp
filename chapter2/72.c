#include <stdio.h>


void copy_int(int val, int maxbytes){
    if(maxbytes >= sizeof(val)){
        printf("True");
    }else {
        printf("False");
    }
}

int main(int argc, char const *argv[])
{
    copy_int(0x123456, 1);
    return 0;
}
