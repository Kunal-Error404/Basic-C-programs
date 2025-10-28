#include <stdio.h>
/*int main(){
    int num = 1;
    for(int i = 1;i<=3;i++){//rows
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
}*/

int main(){
    int rows = 5;
    
    for(int i = 0; i < rows; i++){
        // Print leading spaces
        for(int j = 0; j < rows - i - 1; j++){
            printf(" ");
        }
        
        // Print numbers for this row
        int num = 1;
        for(int j = 0; j <= i; j++){
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }
        
        printf("\n");
    }
    
    return 0;
}