#include <stdio.h>
void count(int arr[],int n);
int main(){
    int ary[5]={1,2,3,4,5};
    count(ary,5);
    return 0;

}
void count(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            printf("%d \t",arr[i]);

        }
    }
}