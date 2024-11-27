#include<stdio.h>
int main(){
	
	long long n,i,num1,num2,fibo;
	printf("Hay nhap n so dau cua day fibonaci:");
	scanf("%lld",&n);
	for( i=0; i<n; i++){
		if(i == 0){
			num1 = 0;
			printf("%lld\n",num1);
		}else if(i == 1){
			num2 = i;
			printf("%lld\n",num2);
		}else{
			fibo=num1+num2;
			printf("%lld\n",fibo);
			num1=num2;
			num2=fibo;
		}
	}

}




