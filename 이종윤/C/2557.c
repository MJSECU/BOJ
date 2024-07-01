#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int a, b, c;
    int num[10] = {0}; 
    scanf("%d %d %d", &a, &b, &c);
    
    int result = a * b * c; 


    while (result > 0) {
        int digit = result % 10; 
        num[digit]++; 
        result /= 10; 
    }


    for (int i = 0; i < 10; i++) {
        printf("%d\n", num[i]);
    }

    return 0;
}
