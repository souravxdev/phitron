#include<stdio.h>

int main(){
    int taka;
    scanf("%d", &taka);

    if(taka >= 5000){
        printf("Cox's Bazar jabo.\n");
        if(taka >= 10000){
            printf("Saint Martin jabo.\n");
        }
        else{
            printf("Ferot chole ashbo.\n");
        }
    }
    else{
        printf("Kothao jabo na.\n");
    }
    return 0;
}