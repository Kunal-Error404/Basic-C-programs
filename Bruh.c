#include <stdio.h>
int main(){
    int arr[]={5,4,3,2,1};
    int *ptr =&arr[0];
    for(int i = 0;i<5;i++,ptr++){
        printf("%d",*ptr);
    }
    return 0;
}
