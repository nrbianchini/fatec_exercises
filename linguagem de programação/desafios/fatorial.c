#include <stdio.h>

// PROTÓTIPO DAS FUNÇÕES
int fatorial (int num);
int combinacao (int m, int p);

int main () {
    int m, p;

    scanf("%d",&m);
    scanf("%d",&p);

    printf("%d",combinacao(m,p));
    return 0;
}


// FUNÇÃO PARA CALCULAR O FATORIAL DE UM NÚMERO
int fatorial (int num) {
    int fat=1;
    for (int i=1; i<=num; i++) {
        fat*=i;
    }

    return fat;
}

// FUNÇÃO PARA CALCULAR A COMBINAÇÃO DE 'M' E 'P'
int combinacao(int m, int p) {
    return fatorial(m) / (fatorial(p)*fatorial(m-p));
}