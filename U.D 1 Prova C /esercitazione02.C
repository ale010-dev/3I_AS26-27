/*Scrivere un programma in C che valuti la situazione di uno studente universitario
sulla base del voto d'esame e della percentuale di frequenza alle lezioni.
Il programma deve: acquisire il voto d'esame;
acquisire la percentuale di presenza alle lezioni;
utilizzare le strutture if/else.*/
#include<stdio.h>
int main(){
    float voto=0;
    int presenza_lezioni=0;
    char junk;

    printf("Inserisci il voto dell'esame (0.0 - 30.0): ");
    scanf("%f",&voto);
    junk=getchar();

    printf("Inserisci la percentuale di frequenza (0 - 100):");
    scanf("%d",&presenza_lezioni);
    junk=getchar();

    if(voto<18){
        printf("Bocciato.\n");
    }
    else { // voto >= 18 
        if (voto == 30.0 && presenza_lezioni >= 85) {
        printf("Esame superato con lode e menzione d'onore!\n");
        }

    else {
            printf("Esame superato consuccesso.\n");
        }
        return 0;
    }
}
