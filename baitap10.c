#include<stdio.h>
int main(){
	int number, countMod = 0, i;
	printf("vui long nhap mot so nguyen: ");
	scanf("%d", &number);
	for(i=1; i <=number; i++){
		if(number % i == 0){
			countMod++;
		}
	}
	if(countMod == 2){
		printf("day la so nguyen to");
	}	
	else{
		printf("day khong phai so nguyen to");
	}
	return 0;
}
