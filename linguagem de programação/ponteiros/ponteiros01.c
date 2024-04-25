#include <stdio.h>
#include <string.h>

int main (){
    int num = 5;
    int *p;

    printf("%d\n", num);
    p = &num;
    *p= 7;
    printf("%d\n", num);

    float num2 = 7.5;
    float *q;
    printf("%.2f\n", num2);
    q = &num2;
    *q = 3.6;
    printf("%.1f\n", num2);

    char nome[50]= "nathalia";
    char *r;
    printf("%s\n", nome);
    r = nome;
    strcpy(r, "raquel");
    printf("%s\n", nome);
    return 0;
}
