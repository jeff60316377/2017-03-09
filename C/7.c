#include <stdio.h>
#include <stdlib.h>

int main(void) 
{ 
int i, j; 
int x, y; 
int A[10][10], B[10][10]; //�x�}�̤j��10*10

  printf("�п�J��l�x�}�����=>"); 
  scanf("%d", &x); 
  printf("�п�J��l�x�}���C��=>"); 
  scanf("%d", &y); 

for(i = 0; i < x; i++) { 
    for(j = 0; j < y; j++) { 
      printf("A[%d][%d]=>", i, j); 
    scanf("%d", &A[i][j]); 
	} 
} 

for (i = 0; i < y; i++) { 
    for (j = 0; j < x; j++) { 
        B[i][j] = A[j][i]; //�@��m���ʧ@
        printf("%d ", B[i][j]); //��X��m�᪺���G
     } 
printf("\n"); 
} 
	return 0;                
}                                      //�W������ 
