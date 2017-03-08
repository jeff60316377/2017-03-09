//第二題 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;  //設立x 
    int y;  //設立y 
    for(x=1;x<10;x++) { //設立x的範圍 
        for(y=1;y<10;y++)//設立y的範圍 
            
            printf("%d*%d=%2d\n", x, y, x*y);  //顯示出運算完的結果  //%2d 為控制寬度為兩個字符，且向右對齊，%-2d 是向左對齊  //\n為換行 
        printf("\n");
    }
    return 0;
}
