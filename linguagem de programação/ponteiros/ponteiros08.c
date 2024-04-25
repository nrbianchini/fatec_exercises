#include <stdio.h>

int main () {
    float num[] = {20, 5, 10, 26, 29, 13, 72, 53, 14, 20};
    for (int i=0; i<10; i++) {
        printf("%p\n", &num[i]);
    }
    }
