#include <iostream>
main() {
	
    float fatorial,e=1.0;
    int n;

    printf("insira n: ");
    scanf("%d",&n);

    for (int y=1;y<=n;y++) {
        fatorial=1.0;
        for (int x=1;x<=y;x++) {
            fatorial=fatorial*x;
        }
        e=e+1.0/fatorial;
    }

    printf("e: %.2f\n",e);

    system ("pause");
}
