//�ĤT�D 
#include <stdio.h>
#include <stdlib.h>

int main() { 

 
 int x;  //�]��X 
 int y;  //�]��Y 
 

printf("�п�J�Ʀr�G");  //��ܼ��D 
scanf("%d",&y);          //��J�ƭ� 
for(x=2;x<=sqrt(y);x++){  //sqrt(y):�Ny����� 


if(y%x==0)                //�p�G Y���HX��l�Ƭ�0���� 
break;                    //���X�j��:break  
} 

if(x<=sqrt(y))            //�p�GX<=Y������� 
printf("%d���O���\n",y); //��ܤ��O��� 
else                      //�_�h 
printf("%d�O���\n",y);   //��ܬO��� 
system("PAUSE"); 
return 0; 
} 
