#include <stdio.h>
#include <stdlib.h>


int factorial(int i){
	int n, sum = 1;
	
	for(n=1;n<=i;n++){
		sum = sum * n; //重複乘法 
	}
	
	return sum;
}

int main(){
	int i;
	
	printf("輸入數字:");
	scanf("%d", &i);
	
	printf("%d! = %d\n", i, factorial(i)); // factorial : 街乘 
	return 0;
}
 
