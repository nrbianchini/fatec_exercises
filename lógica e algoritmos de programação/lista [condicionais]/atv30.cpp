#include <iostream>
int main (){
	float a,b,c;
	setlocale(LC_ALL,"portuguese");
	printf("digite três números: ");
	scanf("%f %f %f",&a,&b,&c);
	
	if (a>b && a>c) {
		printf("%.2f %.2f %.2f",a,b,c);
	}
	else if (b>a && b>c) {
		printf("%.2f %.2f %.2f",b,c,a);
	}
	else if (c>a && c>b) {
		printf("%.2f %.2f %.2f",c,b,a);
	}
}
