#include <stdio.h>
#include <stdlib.h>
#include <iostream>
main () {
	int x;
	x=1;
	
	while (x<=100) {
		printf("%d \n",x);
		x++;
	}
	printf("\n");
	for (x=1;x<=100; x++) {
	printf("%d \n",x);
	}
	printf("\n");
	x=1;
	do 
    { printf("%d \n",x);
      x++;
    }
    while (x<=100);
}
