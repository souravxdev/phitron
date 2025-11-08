#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int space_up = n - 1;
    int star_up = 1;

    int space_down = 0;
    int star_down = n * 2 - 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= space_up; j++){
            printf(" ");
        }
        for(int k = 1; k <= star_up; k++){
            printf("*");
        }
        printf("\n");
        space_up--;
        star_up += 2;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= space_down; j++){
            printf(" ");
        }
        for(int k = 1; k <= star_down; k++){
            printf("*");
        }
        printf("\n");
        space_down++;
        star_down -= 2;
    }
    return 0;
}