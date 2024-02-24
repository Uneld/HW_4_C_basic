#include <stdio.h>

int main() {
    int num, countLuckyNums = 0;

    printf("Enter a natural number greater than 10: ");
    scanf("%d", &num);
	
	if (num < 10){
		printf("Wrong input");
		return 1;
	}

    printf("Lucky numbers between 10 and '%d': \n", num);

    for (int i = 10; i <= num; i++) {
		int product = 1, numProd = i;
		
		while (numProd != 0) {
			product *= numProd % 10;
			numProd /= 10;
		}
		
		int sum = 0, numSum = i;

		while (numSum != 0) {
			sum += numSum % 10;
			numSum /= 10;
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
