#include<stdio.h>
int main(){
    float v1=0;
    float v2=0;
    float v3=0;
    float avg=0;
    printf("ins. il primo valore:");
    scanf("%f",&v1);
    printf("ins. il secondo valore:");
    scanf("%f",&v2);
    printf("ins. il terzo valore:");
    scanf("%f",&v3);
    avg=(v1+v2+v3)/3;
    printf("la media è:%f",avg);
    if(avg>=6)
    {
        printf("sei promosso");
    }
    else
    {
        printf("sei bocciato");
    }
    return 0;
}
