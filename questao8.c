#include<stdio.h>
#include<stdlib.h>

char verificar(int n) {

int cont;
char valor;

if((n%1)==0) {
    cont++;
    if((n%n)==0)
        cont ++;
         if((n%2)==0)
            cont ++;
}
if (cont=3)
    return 'F';
else
    return 'V';
}
int main() {
 int n;
char res;
printf("Digite um numero:");
scanf("%d", &n);
res=verificar(int n);
return 0;
}
