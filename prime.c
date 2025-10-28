#include <stdio.h>
int main(){
    int n;
    int isprime = 1;
    scanf("%d",&n);
    if(n<=1){
    isprime = 0;
   }
    else{
        for(int i = 2;i<=n-1;i++){
            if(n%i==0){
                isprime=0;
                break;
            }
        }
    }
    (isprime == 1)?printf("Prime"):printf("Not prime");
    return 0;
}
