#include<stdio.h>

int main(){

    int N;
    scanf("%d", &N);
    int A[N];

    for(int i = 0; i < N ; i++){
        scanf("%d", &A[i]);
    }

    for(int j = 0; j < N - 1; j++){
        for(int k = j + 1; k < N; k++){
            if(A[j] > A[k]){
                int temp = A[j];
                A[j] = A[k];
                A[k] = temp;
            }
        }
    }

    for(int i = 0; i < N; i++){
        printf("%d ", A[i]);
    }
    return 0;
}