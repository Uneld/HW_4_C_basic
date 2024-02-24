#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer value: ");
    scanf("%d", &num);
    
    while (num != 0) {
        if ((num % 10) % 2 != 0) {
			 printf("No\n");
            return 0;
        }
        num /= 10;
    }
    
	printf("Yes\n");
  

    return 0;
}
