#include <stdio.h>
#include <stdlib.h>

int main(void) 
{ 
int i, j; 
int x, y; 
int A[10][10], B[10][10]; //矩陣最大為10*10

  printf("請輸入原始矩陣的行數=>"); 
  scanf("%d", &x); 
  printf("請輸入原始矩陣的列數=>"); 
  scanf("%d", &y); 

for(i = 0; i < x; i++) { 
    for(j = 0; j < y; j++) { 
      printf("A[%d][%d]=>", i, j); 
    scanf("%d", &A[i][j]); 
	} 
} 

for (i = 0; i < y; i++) { 
    for (j = 0; j < x; j++) { 
        B[i][j] = A[j][i]; //作轉置的動作
        printf("%d ", B[i][j]); //輸出轉置後的結果
     } 
printf("\n"); 
} 
	return 0;                
}                                      //上網找資料 
