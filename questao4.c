#include <stdio.h>
#include <stdlib.h>
 int main() {
 int num, res, n1=1, n2=1,aux, vetor[60];
 printf("Digite um numero:");
 scanf("%d", &num);

 while(n2<num)
 {
     res=n1+n2;
     printf("%d \n", res);
     if(num==res)
        printf("O numero faz parte da lista de Fibonacci");
     else
     n1=n2;
     n2=res;
     aux=1;
}
if(num!=res) {
    printf("O numero nao faz parte da listaa de Fibonacci");
}

 return 0;
 }
