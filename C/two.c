//�ĤG�D 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;  //�]��x 
    int y;  //�]��y 
    for(x=1;x<10;x++) { //�]��x���d�� 
        for(y=1;y<10;y++)//�]��y���d�� 
            
            printf("%d*%d=%2d\n", x, y, x*y);  //��ܥX�B�⧹�����G  //%2d ������e�׬���Ӧr�šA�B�V�k����A%-2d �O�V�����  //\n������ 
        printf("\n");
    }
    return 0;
}
