#include <stdio.h>
void prime(int n);
int main(){
    int o;
    printf("ENTER THE NUMBER YOU WANT TO CHECK FOR PRIME:\n");
    scanf("%d",&o);
    prime(o);
    return 0;


}
void prime(int n){
    if(n%!n==0 && n>1){
    printf("%d is prime",n);
    }
}