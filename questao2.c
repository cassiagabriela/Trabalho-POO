#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[20];
    int salario, novosalario=0;
do {
    printf("\n\nDigite o seu nome: ");
    scanf("%s",&nome);
    printf("Digite o seu salario: ");
    scanf("%d",&salario);

    if(salario <= 150) {
        novosalario=salario+salario*0.25;
    }
    else if(salario <= 300) {
        novosalario=salario+salario*0.20;
    }
    else if(salario <= 600) {
        novosalario=salario+salario*0.15;
    }
    else {
        novosalario=salario+salario*0.10; }
printf("\nNome: %s \nSalario atual: %d \n", nome, salario);
printf("Novo Salario: %d",novosalario);
} while(nome[20]!="FIM");

  return 0;
}
