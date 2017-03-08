//第三題 
#include <stdio.h>
#include <stdlib.h>

int main() { 

 
 int x;  //設立X 
 int y;  //設立Y 
 

printf("請輸入數字：");  //顯示標題 
scanf("%d",&y);          //輸入數值 
for(x=2;x<=sqrt(y);x++){  //sqrt(y):將y平方根 


if(y%x==0)                //如果 Y除以X後餘數為0的話 
break;                    //跳出迴圈:break  
} 

if(x<=sqrt(y))            //如果X<=Y的平方根 
printf("%d不是質數\n",y); //顯示不是質數 
else                      //否則 
printf("%d是質數\n",y);   //顯示是質數 
system("PAUSE"); 
return 0; 
} 
