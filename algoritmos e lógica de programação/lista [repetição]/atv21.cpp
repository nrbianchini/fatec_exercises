 #include <iostream>
 int main () {
    setlocale(LC_ALL,"portuguese");
    int x=0,y=0,somapar=0,cont=0,impar;
    
	printf("insira o valor de x: ");
    scanf("%d",&x);
    printf("insira o valor de y: ");
    scanf("%d",&y);

    if (y>x) {
    for (cont=x;cont<=y;cont++)
    { cont;
    if (cont%2==0) {
    somapar=somapar+cont;
    }

    else { 
    impar=impar*cont;
    }
}
}
  
    else {
    printf("x n�o pode ser maior que y\n");
    }
    printf("a soma dos n�meros pares nesse intervalo � %d\n",somapar);
    printf("a multiplica��o dos n�meros impares nesse intervalo � %d\n",impar);

    system ("pause");
    return 0;
}
