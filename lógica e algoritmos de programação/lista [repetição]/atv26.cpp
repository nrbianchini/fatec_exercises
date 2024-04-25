#include <iostream>

int main()
{
    int i,n,divisor,multiplo;
    setlocale(LC_ALL,"portuguese");

    printf("número: ");
    scanf("%d",&n);

    divisor=0;
    for (i=n;divisor<1;i++)
    {
        if (i%11==0 || i%13==0 || i%17==0)
        {
            multiplo=i;
            divisor++;
        }
    }

    printf("o primeiro múltiplo é: %d", multiplo);

    return 0;
}
