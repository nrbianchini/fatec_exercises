#include <stdio.h>
#include <iostream>
int main ()
{
	int n,m; 
    n=1;
    m=0;
    setlocale(LC_ALL,"portuguese");
    while (n>0) 
	{
    	if(n%3==0) 
    	{
		printf("o número %d e múltiplo de 3 \n",n);
    	m++;
		}
		if (m==5)
		{ 
		break;
		}
	n++;
}
}
