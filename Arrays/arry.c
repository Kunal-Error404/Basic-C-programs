//wap to take input in an array and print that array with a loop
#include <stdio.h>
int main(){
    int arr[5];
    int i;
    for(i=0;i<5;i++){
        printf("ENTER");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        printf("%d \t",arr[i]);

    }
    return 0;
}