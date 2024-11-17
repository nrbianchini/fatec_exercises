#include <iostream>
#include <stdio.h>
#include <stdlib.h>
main (){
	int x;
	float n,s=0;
	x=1;
	setlocale(LC_ALL,"portuguese");
	while (x<=10) {
		printf("digite os números: ");
		scanf("%f",&n);
		
        s=s+n;
        x=x+1;
        printf("soma %.2f \n",s);
	}
}
