// Write a program to insert an element at the end of an array.
#include <stdio.h>
void insert(int arr[],int n);
    int k;
int main(){
    scanf("%d",&k);
    int aru[6]={1,2,3,4,5};
    insert(aru,6);
    for(int l=0;l<6;l++){
        printf("%d \t",aru[l]);
    }
return 0;


}
void insert(int arr[],int n){
    arr[n-1]=k;
    
}
