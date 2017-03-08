#include <stdio.h>
#include <stdlib.h>

int main(){
	int map[] = {1,16,9};
	int i, sum;
	
	for(i=0;i<sizeof(map)/sizeof(map[0]);i++){ //sizeof:取得變數的位元組大小
		sum = sqrt(map[i]);
		printf("map[%d] = %d\n", i, sum);
	}
	
	return 0;
}
