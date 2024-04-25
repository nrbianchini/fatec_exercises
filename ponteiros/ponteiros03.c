#include <stdio.h>
int main (){
    int num1, num2;
    scanf("%d", &num1);
    int *p;
    p = &num1;
    printf("%p\n", p);

    scanf("%d", &num2);
    int *q;
    q = &num2;
    printf("%p\n", q);

    if (*p>*q) printf("o maior eh: %p\no conteudo eh %d", p, *p);
    else printf("o maior eh: %p\no conteudo eh %d", q, *q);
    return 0;
}
