#include <iostream>
int main() {
   int n,i,divisor,resultado,soma;
   divisor=0;
   printf("insira um numero: ");
   scanf("%d",&n);
   
   for(i=1;i<n;i++) 
    {                
    divisor++;    
    resultado=n%divisor;
    if(resultado==0) {
    soma=0;
    soma=soma+resultado;
    printf("%d",&soma);
    }
 } 

  system("pause");
} 
