#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter an non-negative integer value: ");
    scanf("%d", &num);
    
     while (num != 0) {
        reversed *= 10;
        reversed += num % 10;
        
        num /= 10;
    }

    printf("Reverse of the number is: %d\n", reversed);

    return 0;
}
