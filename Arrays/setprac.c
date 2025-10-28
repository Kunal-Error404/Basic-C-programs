// Write a program to print the largest number in an array.

#include <stdio.h>
int large(int arr[],int n);
int main(){
    int aru[5]={50,90,700,40,20};
    printf("%d",large(aru,5));
    return 0;

}
int large(int arr[],int n){
    int curmax = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i]>curmax){
            curmax = arr[i];
        }
    }
    return curmax;

}