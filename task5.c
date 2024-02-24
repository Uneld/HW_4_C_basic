#include <stdio.h>

int main() {
    int num, countLuckyNums = 0;

    printf("Enter a natural number greater than 10: ");
    scanf("%d", &num);
	
	if (num < 10){
		printf("Wrong input");
		return 0;
	}

    printf("Lucky numbers between 10 and '%d': \n", num);

    for (int i = 10; i <= num; i++) {
		int product = 1, sum = 0 , num = i;
		
		while (num != 0) {
			product *= num % 10;
			sum += num % 10;
			num /= 10;
		}

	
        if (product == sum) {
			printf("%d ", i);
            countLuckyNums++;
        }
    }
    
    if (countLuckyNums == 0){
		printf("lucky numbers not found");
	}

    return 0;
}
