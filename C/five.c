#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, sum = 0;              //�]���ܼ�i �`�X��0 
	int mean[] = {1,1,3,4,6};    //�]�ߥ����� mean 
	
	for(i=0;i<5;i++){            //�]��i�q0�}�l��5���e���� 
		sum = sum  + mean[i];    //�p�⥭���� 
	}
	int length;                  // length :�Ǧ^�r�ꪺ���סC 
	length = ( sizeof(mean) / sizeof(mean[0]) );  //�Ǧ^�r�ꪺ���׬� 
	sum = sum / length;          //�����᪺�`�M = �`�M/�}�C������(���X�ӭ�) 
	
	printf("������ = %d\n", sum);
	
	return 0;
}
