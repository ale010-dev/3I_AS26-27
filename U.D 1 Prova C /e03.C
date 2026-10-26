#include<stdio.h>
int main(){
    int v1=0;
    int v2=0;
    float avg=0;
    printf("ins. il primo valore:");
    scanf("%d",&v1);
    printf("ins. il secondo valore:");
    scanf("%d",&v2);
    avg=(v1+v2)/2;
    printf("la media è: %f", avg);
    return 0;
}