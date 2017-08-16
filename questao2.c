#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(){
    char nome[20];
    float salario, novosalario, soma1, soma2, diferenca;

    printf("\n\nDigite o nome do funcionario: ");
    scanf("%[^\n]s", &nome);

        while(strcmp(nome, "fim") != 0){
        printf("Informe o salario: ");
        scanf("%f", &salario);
        soma1 = soma1+salario;

    if(salario <= 150) {
        novosalario=salario+salario*0.25; }
    else if(salario <= 300) {
        novosalario=salario+salario*0.20; }
    else if(salario <= 600) {
        novosalario=salario+salario*0.15; }
    else {
        novosalario=salario+salario*0.10; }

        soma2=soma2+novosalario;
        diferenca=soma2 - soma1;

printf("\nNome: %s \nSalario atual: %.f \n", nome, salario);
printf("Novo Salario: %.f",novosalario);

        printf("\n\nDigite o nome do funcionario: ");
        scanf("%s", &nome);
}
    printf("Soma de salarios atuais: %.f\n", soma1);
    printf("Soma de salarios reajustados: %.f\n", soma2);
    printf("Diferenca dos salarios: %.f\n", diferenca);

  return 0;
}
