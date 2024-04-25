#include <stdio.h>

void parImpar (int x) {

    while (x != 1) {
        if (x % 2 == 0) {
            x = x / 2;
        }
        else {
            x = (x * 3) + 1;
        }
        printf("%d\n", x);
    }
}

int main() {
        int n;
        scanf("%d", &n);

    parImpar(n);
    return 0;
    }