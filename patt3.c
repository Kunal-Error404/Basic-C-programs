#include <stdio.h>
int main(){
    int num =1;
    for(int i = 1;i<=3;i++){
        for(int j = i;j<=3;j++){
            printf(" ");
        }
        for(int k = i;k<=2*i-1;k++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}