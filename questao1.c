#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i;
    printf("Digite o primeiro numero:");
    scanf("%d",&a);
    printf("Digite o segundo numero:");
    scanf("%d",&b);
if(a<b) {
      for(i=a; i<b; i++) {
       if((i%2)!=0)
        printf("%d eh um numero impar \n", i); }
}

    return 0;
}
