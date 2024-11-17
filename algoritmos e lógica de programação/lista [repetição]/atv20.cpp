#include <iostream>

int main() {

   int qtden=0,i,n,p=0;
   setlocale(LC_ALL,"portuguese");

   while (n!=1000) {  
    printf("insira os valores: ");
    scanf("%d",&n);
    qtden++;

    if (n==1000) {
    break;
    }

    else if(n%2==0) {
    p++;
    }
}

   printf("%d foram lidos\n",qtden-1);
   printf("%d são pares",p);
   system("pause");
}
