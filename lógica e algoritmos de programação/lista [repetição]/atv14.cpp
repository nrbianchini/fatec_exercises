#include <iostream>
main () {
	int n,i;
	printf("insira um numero par: ");
	scanf("%d",&n);
    for (i=n; i>=0; i=i-2) {
    	printf("%d \n",i);
	}
	return 0;
}
