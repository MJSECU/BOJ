#include <stdio.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X); 
    
    int A[N];  
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);  
    }
    
    // X보다 작은 수를 출력
    for (int i = 0; i < N; i++) {
        if (A[i] < X) {
            printf("%d ", A[i]);
        }
    }
    
    printf("\n");  
    
    return 0;
}
