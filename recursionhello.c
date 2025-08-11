#include <stdio.h>
void printhw(int n);
int main(){
    printhw(5);

}
void printhw(int n){
    if(n==0){
        return;
    }
    else{
        printf("Hw");
        printhw(n-1);
        return;
    }
}