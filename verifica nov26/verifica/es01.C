/*Codice in C di un algoritmo che richieda quattro valori da tastiera e ne calcoli:
valore maggiore
media
quale tra le due somme è maggiore
    Author:Gruppioni Alessandro
    Data:16/11/2026
    Filename.es01.C
    Abstract:esercizio 1
    */
   #include<stdio.h>
   int main(){
    //assegnazione delle variabili
    int v1=0;
    int v2=0;
    int v3=0;
    int v4=0;
    int avg=0;
    char junk;

    printf("Inserisci i lprimo valore:");
    scanf("%d",&v1);
    junk=getchar();

    printf("Inserisci il secondo valore:");
    scanf("%d",&v2);
    junk=getchar();

    printf("Inserisci il terzo valore:");
    scanf("%d",&v3);
    junk=getchar();

    printf("Inserisci il quarto valore:");
    scanf("%d",&v4);
    junk=getchar();


    avg=(v1+v2+v3+v4)/4;
    printf("La media e:%f" ,avg);

   }