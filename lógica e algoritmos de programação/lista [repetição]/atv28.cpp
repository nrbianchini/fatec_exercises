#include <iostream>
main(){
       // 1*2*3*4 = 24
       float fatorial,e=1;
       int x,n,y;
       setlocale(LC_ALL,"portuguese");
       printf ("insira um número: ");
       scanf("%d",&n);
       for (y=1; y<n; y++){
              fatorial = 1;
              for (x=1;x<=y;x++){
                  fatorial=fatorial*x;
              }
              e=e+1.0/fatorial*x;
       }
       printf ("e: %f \n",e);
       system("pause");
}
