#include <stdio.h>
#include <stdlib.h>


int raizes(int a, int b, int c) {

    int x, aux;
    x=(b*b)-(4*a*c);

    if(x<0)
        return 0;
    else if (x==0)
        return 1;
    else
        return 2;

}

int main()
{
    int a, b, c, res, resultado;
    printf("Digite o valor de A:");
    scanf("%d", &a);
    printf("Digite o valor de B:");
    scanf("%d", &b);
    printf("Digite o valor de C:");
    scanf("%d", &c);
    res=raizes(a, b,c);
    resultado=raizes(0);

    printf("%d",resultado);



    return 0;
}
