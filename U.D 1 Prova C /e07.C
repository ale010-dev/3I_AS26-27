//* acquisire quattro valori da tastiera,stampare a video e calcolare la somma dei valori compresi tra 10 e 20,estremi inclusi.*/
#include<stdio.h>
int main(){
    int v1=0;
    int v2=0;
    int v3=0;
    int v4=0;
    int somma;
    char junk;

    //fase di input valori
    printf("Inserisci il 1° valore:");
    scanf("%d",&v1);
    junk = getchar();

    printf("Inserisci il 2° valore:");
    scanf("%d",&v2);
     junk = getchar();

     printf("Inserisci il 3° valore:");
    scanf("%d",&v3);
     junk = getchar();

    printf("Inserisci il 4° valore:");
    scanf("%d",&v4);
     junk = getchar();
     //controlli ed eventuali somme
     somma =0;
    if((v1 >= 10) && (v1 <= 20)){
        printf("valore v1: %d\n", v1);
        somma = somma + v2;

    }

    if((v2 >= 10) && (v2 <= 20)){
        printf("valore v2: %d\n", v2);
        somma = somma + v2;
    }

    if((v3 >= 10) && (v3 <=20)){
        printf("valore v3: %d\n", v3);
        somma = somma +v3;

    }

    if((v4 >= 10) && (v4 <=20)){
        printf("valore v4: %d\n", v4);
        somma = somma +v4;
    }
    return 0;
    

}
