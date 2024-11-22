#include <stdio.h>
//ต้องแก้
int main() {
    int num, sum = 0, sum1 = 0;
    scanf("%d", &num);

    
    while (num > 0) {
        sum += num % 10; 
        num /= 10;       
    }

	sum1 += sum % 10; 
    sum /= 10;
	sum1 += sum;     
    printf("Sum of digits: %d\n", sum1);
    return 0;
}

