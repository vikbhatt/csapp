#include <stdio.h>

int multiply17(int x){
    return (x << 4) + x;
}

int multiplyminus7(int x){
    return -(x << 3) + x;
}

int multiply60(int x){
    return (x << 6) - (x << 2);
}

int multiplyminus112(int x){
    return -(x << 7) + (x << 4);
}

int main(int argc, char const *argv[])
{
    printf("%d", multiply17(3));
    return 0;
}
