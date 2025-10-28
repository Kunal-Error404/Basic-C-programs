// In an array of numbers, find how many times does a number 'x' occurs.
#include <stdio.h>

int k;
int count(int arr[],int n);
int main(){
    int aru[5]={1,1,1,4,4};
    printf("ENTER THE NUMBER WHICH YOU WANT TO COUNT:");
    scanf("%d",&k);
    printf("THE AMOUNT OF TIMES YOUR INPUT NUMBER APPEARED IS: %d",count(aru,5));
    return 0;
}



int count(int arr[],int n){
    int _count = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]==k){
            _count++;
        }

    }
    return _count;

}