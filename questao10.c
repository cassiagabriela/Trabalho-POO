#include <stdlib.h>
#include <stdio.h>
#include "mes.h"

static char *nomemes;

char *nomemesMes(int num) {
    switch(num){
        case 1:
            nomemes = "Janeiro";
            break;
        case 2:
            nomemes = "Fevereiro";
            break;
        case 3:
            nomemes = "Marco";
            break;
        case 4:
            nomemes = "Abril";
            break;
        case 5:
            nomemes = "Maio";
            break;
        case 6:
            nomemes = "Junho";
            break;
        case 7:
            nomemes = "Julho";
            break;
        case 8:
            nomemes = "Agosto";
            break;
        case 9:
            nomemes = "Setembro";
            break;
        case 10:
            nomemes = "Outubro";
            break;
        case 11:
            nomemes = "Novembro";
            break;
        case 12:
            nomemes = "Dezembro";
            break;
    }
    return nomemes;
}
int main(){
    int mes, res;
    printf("Informe o numero do um mes: ");
    scanf("%d", &mes);
    res=nomemes(mes);
    printf("O mes informado eh: %s\n", nomemesMes(nomemes));

    return 0;
}
