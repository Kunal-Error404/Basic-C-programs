#include <stdio.h>

int fib(int f);
int main(){
    int n;
    scanf("%d",&n);
    
    int ary[n];
    for(int i=0;i<n;i++){
        ary[i] =fib(i);
        printf("%d \t",ary[i]);
        
    }
    return 0;


}
int fib(int f){
    if(f==0){
        return 0;
    }
    else if(f==1){
        return 1;
    }
    else{ 
    int fibnm1 = fib(f-1);
    int fibnm2 = fib(f-2);
    int fibn = fibnm1 +fibnm2;
    return fibn;
    }
}