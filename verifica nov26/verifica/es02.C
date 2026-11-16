/*
    Author:Gruppioni Alessandro
    Data:16/11/2026
    Filename:es02.C
    Abstract:esercizio2
*/
#include<stdio.h>
int main(){
    int bm=0;
    int bM=0;
    int h=0;
    int area=0;
    int perimetro=0;
    char junk;

    printf("Inserisci base minore:");
    scanf("%d",&bm);
    junk=getchar();
    printf("Inserisci base maggiore:");
    scanf("%d",&bM);
    junk=getchar();
    printf("Inserisci Altezza");
    scanf("%D",&h);
    junk=getchar();

    if(h=0)
    {
            if(bm=bM)
            
                 printf("area:%d",area)
            else
            {
                perimetro=(bm+bM)/2;
                printf("perimetro:%d",perimetro);
            }
    }
    else
    {
        area=(bm+bM)*h/2;
        printf("area=(bm+bM)*h/2");
    }

return 0 ;
    
}
