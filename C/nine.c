#include <stdio.h>
#include <stdlib.h>


int factorial(int i){
	int n, sum = 1;
	
	for(n=1;n<=i;n++){
		sum = sum * n; //���ƭ��k 
	}
	
	return sum;
}

int main(){
	int i;
	
	printf("��J�Ʀr:");
	scanf("%d", &i);
	
	printf("%d! = %d\n", i, factorial(i)); // factorial : �� 
	return 0;
}
 
