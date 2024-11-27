#include<stdio.h>
int main(){
	int number, num1, num2, num3;
	for(number = 100; number <= 999; number++){
		num1 = number /100;
		num2 = (number % 100) / 10;
		num3 = number % 10;
		if(num1 * num1 * num1 + num2* num2 * num2 + num3 * num3* num3 == number){
			printf("%d\n", number);
		}
	}
	return 0;
}
