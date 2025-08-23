//wap to reverse an array
#include <stdio.h>
void rev(int arr[],int n);
void printarr();
  int ary[5]={5,4,3,2,1};
int main(){
  
    rev(ary,5);
    printarr();
    return 0;


   

}
void rev(int arr[], int n){
    
    for(int i=0;i<n/2;i++){
       int initial = arr[i];
       int reverse = arr[n-i-1];
       arr[i]= reverse;
       arr[n-i-1] = initial;
    }
}
void printarr(){
    int i;
    for(i=0;i<5;i++){
        printf("%d \t",ary[i]);

    }

}
