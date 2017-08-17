#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
char nome[20], inverso[20];
int tam, i, p=0;

printf("Digite um nome:");
gets(nome);
for(i=strlen(nome)-1; i>=0; i--) {

    inverso[p]=nome[i];
    p++;
    inverso[p]='\0'; }

if(strcmp(nome, inverso)==0) {
    printf("\nE palindromo\n");
}
else
{
    printf("\nNao e palindromo"); }
return 0;
}

