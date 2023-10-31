#include <stdio.h>

int count_before_one(int A[], int N) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == 1) {
            break; // 1 পেয়ে এসে যখন গননা বন্ধ করবে
        }
        count++;
    }
    return count;
}

int main() {
    int N;
    scanf("%d", &N);
    
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    int result = count_before_one(A, N);
    printf("%d\n", result);
    
    return 0;
}
