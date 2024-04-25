#include <stdio.h>
int main (){
    int num1=5;
    int num2=7;

    int *p = &num1;
    printf("%p\n", p);

    int *q = &num2;
    printf("%p\n", q);

    if (p>q) printf("o maior eh: %p\n", p);
    else printf("o maior eh: %p\n", q);
    return 0;
}