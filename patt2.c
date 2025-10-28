#include <stdio.h>
int main(){
    for(int i = 0;i<5;i++){
        for(int j = 0;j<=5-i;j++){
            printf(" ");
        }
        int num = 1;
        for(int j = 0;j<=i;j++){
            printf("%d ",num);
            num=num*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}