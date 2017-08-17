#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num, vetor[8], i=7, j=i;

	printf("Digite um numero: ");
	scanf("%d",&num);

	if(num>=2) {
        while((num/2)>0) {
            vetor[i]=num%2;
            num/=2;
            i--;
            j--;
        }-
        for(i=0; i<j; i++) {
            vetor[i]=0;
            vetor[j]=1;
        }
        for(i=0; i<8; i++) {
            printf("%2d", vetor[i]);
        }}
    else if(num==1) {
            for(i=0; i<j; i++)
            printf("%2d", vetor[i]=0);
             printf("%2d", vetor[i]=1);
        }
    else if(num==0) {
            for(i=0; i<8; i++)
                 printf("%2d", vetor[i]=0);
        }
     else
            printf("Nao definido");

	getch();
	return 0;
}
