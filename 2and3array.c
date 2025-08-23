#include <stdio.h>
void table(int arr[][10],int a, int b);
int main(){
    int arr[2][10];
    table(arr,2,10);
    for(int k =0;k<10;k++){
        printf("%d\t%d\n",arr[0][k],arr[1][k]);
        
        return 0;

    }
    
}
void table(int arr[][10],int a, int b){
    for(int i = 0;i<b;i++){
        arr[0][i]=2*(i+1);
        arr[1][i]=3*(i+1);
       
    }
    
}