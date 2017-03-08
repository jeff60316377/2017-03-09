#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, sum = 0;              //設立變數i 總合為0 
	int mean[] = {1,1,3,4,6};    //設立平均值 mean 
	
	for(i=0;i<5;i++){            //設立i從0開始到5之前為止 
		sum = sum  + mean[i];    //計算平均值 
	}
	int length;                  // length :傳回字串的長度。 
	length = ( sizeof(mean) / sizeof(mean[0]) );  //傳回字串的長度為 
	sum = sum / length;          //平均後的總和 = 總和/陣列的長度(有幾個值) 
	
	printf("平均值 = %d\n", sum);
	
	return 0;
}
