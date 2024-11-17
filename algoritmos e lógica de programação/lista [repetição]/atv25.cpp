#include<iostream>
main(){
    int x,soma=0;
    x=1;
    setlocale(LC_ALL,"portuguese");
    
    while(x<1000){
    if (x%3==0 || x%5==0){
    soma=soma+x;
}
    x=x+1;
}
    printf("a soma dos números naturais é de: %d\n",soma);
    system("pause");
}
