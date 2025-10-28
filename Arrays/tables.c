#include <stdio.h>
void table(int arr[][2],int m,int n,int k);
void tableprint(int arr[][2],int m,int n);
int main(){
    int k = 0;
    int arr[10][2];
    printf("ENTER THE NUMBER WHOSE TABLE YOU WANT TO PRINT:\n");
    scanf("%d",&k);
    table(arr,10,2,k);
    return 0;



}
void tableprint(int arr[][2],int m,int n){
    for(int i=0;i<m;i++){
       
        for(int j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

void table(int arr[][2],int m,int n,int k){
    for(int i=0;i<11;i++){
        arr[i][0]=i;
        arr[i][1]=k*i;
    }
    tableprint(arr,11,2);
}
