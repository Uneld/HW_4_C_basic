#include <stdio.h>

int main() {
    int a, b, sum = 0;
    
    printf("Enter two numbers a and b (a <= b): ");
    scanf("%d %d", &a, &b);
    
    if (a > b){
		printf("Wrong input");
		return 1;
	}
    
    for (int i = a; i <= b; i++) {
        sum += i * i;
    }
    
    printf("Sum of squares from %d to %d: %d\n", a, b, sum);
    
    return 0;
}
