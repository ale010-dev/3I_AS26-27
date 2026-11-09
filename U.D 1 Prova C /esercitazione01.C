/*Scrivere un programma che simuli la cassa di un negozio.
Il programma deve chiedere all'utente di inserire il prezzo unitario di un articolo e la quantità acquistata;
Calcolare il prezzo totale lordo;
Applicare una politica di sconto basata sulle quantità;
Stampare a schermo il totale lordo,lo sconto applicato e il prezzo finale netto*/
#include<stdio.h>
int main(){
    float prezzo_unitario_articolo=0;
    int quantita_acquistata=0;
    float prezzo_totale_lordo=0;
    float sconto=0;
    float prezzo_finale_netto=0;
    char junk;

    printf("Inserisci il prezzo unitario dell'articolo:");
    scanf("%f",&prezzo_unitario_articolo);
    junk=getchar();

    printf("Inserisci la quantità acquistata:");
    scanf("%d",&quantita_acquistata);
    junk=getchar();

    //Calcolo il prezzo totale lordo
    prezzo_totale_lordo = prezzo_unitario_articolo*quantita_acquistata;

    if(quantita_acquistata >10){
        sconto = prezzo_totale_lordo * 0.15;

    }
    else{
        printf("Nessuno sconto");

    }

    printf("prezzo_totale_lordo = %.2f\n", prezzo_totale_lordo);
    printf("sconto = %.2f\n", sconto);
    printf("prezzo_finale_netto = %.2f\n", prezzo_finale_netto);
    return 0;
    
}