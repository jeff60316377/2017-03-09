#include <stdio.h>
#include <stdlib.h>

int main() {
	
  int x,y,z,i,j; //�]��5���ܼ� 
  int a[6]={1,2,5,8,9,15}; //�ŧi a �O�@�� int ���}�C�A���� 6 �Ӥ���
  
  printf("�п�J���J��:");
	scanf("%d", &x);    // &�G���o�ܼƪ���}
	a[6] = x;           // �O�}�Ca = �ܼ�x 
	
  for( y = 1 ; y <= 6 ; y = y+1 ){     //�] y = 1�A�}�l�Ĥ@�Ӵ`��;�䤤 y �N��`�������ơC 
      for( z = 1 ; z <= 5 ; z = z+1 ){ //�] k=1�A�q�� 1 ����ƶ}�l�M����;�䤤 k �N���ƪ���m�C����۾F�ⵧ���(�� k ���M�� k+1 ��)���j�p 
			if(a[y]<a[z]){             //�p�G�۾F�ⵧ��Ƥ����e�̤��̤p( y < z )�h�ⵧ��ƥ洫��m�C 
				j = a[z];              //���Τ@���ܼ� j �O�d a[z] ���� 
 				a[z] = a[y];           //�A�N a[y] ���ȵ� a[z]
				a[y] = j;             //�̫�A�� j ����(�]�N�O a[z] �������)�� a[y]  
			}
		}
	}
	
//             �w�j�ƧǪk
//             �N�n�ƧǪ���H���@�ⳡ���A�@�ӬO�w�ƧǪ��A�@�ӬO���ƧǪ��C
//             �ƧǮɭY�O�q�p��j�A�̤j�����|�p�P��w�@�˲��ܥk�ݡA��Q�Τ���۾F�������覡�A�N���j�����洫�ܥk�ݡC 
//             �ҥH���j�������|���_���k���ʡA����A����m����C 
//             �S��  
//             (1) �`������ �� ��ƭӼ� �w ���C
//             (2) �b�C�@���ƦC�`������A�@�w���@����ƥi�H�ƦC�b���T����m�A�A�i��U�@�Ӵ`�����ƦC�ɡA�K�i��֤@����ƪ�����C
  	
		
	
	for(i=0;i<7;i++){                         //�] i �����a�}�C��ƪ��ܼ� 
		printf("a[%d] = %d\n", i, a[i]);      //�̧���ܴ��J�Ʀr�᪺a�}�C 
	}
	return 0;                       //��w�ƧǪk �����ӷ�: https://openhome.cc/Gossip/AlgorithmGossip/SelectionInsertionBubble.htm 
} 
