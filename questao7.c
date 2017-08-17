#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int raizes(int a, int b, int c) {
    int delta;
    delta=(b*b)-(4*a*c);
    return delta; }
int main()
{
    int a, b, c, resultado, x1, x2, x3;
    printf("Digite o valor de A:");
    scanf("%d", &a);
    printf("Digite o valor de B:");
    scanf("%d", &b);
    printf("Digite o valor de C:");
    scanf("%d", &c);
    raizes(a, b,c);
    resultado=raizes(a, b, c);
    x1=(-b + sqrt(resultado)) /(2*a);
    x2=(-b - sqrt(resultado)) / (2*a);
    x3=(-b - sqrt(resultado));
    if(resultado==0) {
    printf("\n\nSTATUS 0\n");
    printf("SEM RAIZES"); }
    else if(resultado==1) {
    printf("\n\nSTATUS 1\n\n");
    printf("A raiz e: %d", x3); }
    else {
    printf("\n\nSTATUS 2\n\n");
    printf("As raizes sao: %d e %d", x1, x2); }

return 0;
}
