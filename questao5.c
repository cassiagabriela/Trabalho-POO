#include <stdio.h>
#include <stdlib.h>

int main()
{
float p, a, i;
int juros, aplicada, cont=0,pago, falta, j, pagar;

printf("Informe o valor do emprestimo:");
scanf("%f",&p);
printf("Informe o valor que será pago em cada mes:");
scanf("%f",&a);
printf("Informe o valor dos juros:");
scanf("%f",&i);

juros=(i*p)/100;
aplicada=a+juros;

for(j=1;j<=12;j++)
{
    printf("\nMES %d: \n", j);
    printf("Valor em dinheiro dos juros pagos %d \n",juros);
    cont++;
    pago=juros*cont;
    falta=p-pago;
    printf("Valor dos juros ja pagos dos meses anteriores: %d\n",pago);
    if(falta==0) {
    printf("\n\nDIVIDA PAGA\n\n");
    break; }
    else  printf("Valor que falta pra pagar a divida: %d\n", falta); }

    return 0;

}
