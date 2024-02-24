#include <stdio.h>

int main() {
    int num = 0, count = 0;

    printf("Enter an non-negative integer value: ");
    scanf("%d", &num);
    
     while (num != 0) {
        count++;
        num /= 10;
    }

    if (count == 3) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
