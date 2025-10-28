// Write a program to print the largest number in an array.
#include <stdio.h>
int large(int arr[], int n);
int main(){
    int ary[5]={100,110,120,50,40};
    printf("MAX VALUE IS: %d",large(ary,5));
    return 0;

}
int large(int arr[], int n){
    int currmax=arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]>currmax){
            currmax=arr[i];
        }
    }
    return currmax;
}