#include <stdlib.h>
#include <stdio.h>

int numeroPrimo(int num){
    int i, aux=2;
  for(i=num-1;i>1;i--){
        if(num%i == 0){
            return 0;
        } }
    return 1;}

int main(){
    int num, aux=0, i=1;
    printf("Informe um numero: ");
    scanf("%d", &num);

    if(numeroPrimo(num)==1){
        printf("E PRIMO\n"); }
    else
        printf("Nao e primo");

    printf("\nOs primeiros numeros primos sao:\n");
    while(aux < num){
        if(numeroPrimo(i)){
            printf("%d\n", i);
            aux++;
        } i++; }
  return 0;
}
