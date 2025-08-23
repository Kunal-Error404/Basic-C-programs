/*#include <stdio.h>
int main(){
    for(int i =1;i<=4;i++){
        for(int j = 1;j<=5;j++){
        if(j==5){
            printf("\n");
        }
        printf("*");
        }
    }

}
    */
#include <stdio.h>
int main(){
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= 5; j++){
            printf("*");
            if(j == 5){
                printf("\n");
            }
        }
    }
}  