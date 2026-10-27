/* 
    Creare un programma che richiede in input due lati di una figura;
    se i lati sono uguali calcolare il perimetro della figura;se i lati sono diversi
    calcolare l'area della figura. Ovviamente comunicare il valore calcolato.
    (ipotizzando quadrato o rettangolo)
*/

#include<stdio.h>
int main(){
    float lato1=0;
    float lato2=0;
    float perimetro=0;
    float area=0;
    printf("inserisci il primo valore:");
    scanf("%f",&lato1);
    printf("inserisci il secondo valore:");
    scanf("%f",&lato2);
    
    if(lato1==lato2)
    {
        perimetro=4*lato1;
        printf("il perimetro del quadrato è: %.2f\n",perimetro);
        
    }
    else
    {
        area=lato1 * lato2;
        printf("l'area del rettangolo è: %.2f\n",area);

    }
    return 0;

}