#include<stdio.h>
int main(){
    int a=0;
    int b=0;
    int tmp;
    char junk;

    printf("Inserisci a:");
    scanf("%d",&a);
    junk = getchar();

    printf("Inserisci b:");
    scanf("%d",&b);
    junk = getchar();

    if(a > b){
        //devo eseguire lo scambio
        tmp = a;
        a =b;
        b = tmp;
    }
    // stampa valori ordinati crescenti
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;



}