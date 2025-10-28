#include <stdio.h>
#include <string.h>
void sort(int arr[],int l);
void input(int arr[],int n);
void print(int arr[],int n);

int main(){
    int x = 0;
    printf("Enter the size of array:");
    scanf("%d",&x);
    int arr[x];
    printf("Enter the array:\n");
    input(arr,x);
    printf("The entered array is:\n");
    print(arr,x);
    sort(arr,x);
    printf("The sorted array is:\n");
    print(arr,x);
    return 0;

}
void sort(int arr[],int l){
    
    for(int i = 0;i<l;i++){
        for(int j = i+1;j<l;j++){
            if(arr[j]>arr[i]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
            else{
                continue;
            }
        }
    }
}
void input(int arr[],int n){
    for(int i = 0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
}
void print(int arr[],int n){
    for(int i = 0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}



