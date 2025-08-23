#include <stdio.h>
//void printhw(int n);
const char* printHW(int n);
int main(){
    printf("%s",printHW(5));
    return 0;
    //printhw(5);

}
const char* printHW(int n){
    return "HW";
}
/*void printhw(int n){
    if(n==0){
        return;
    }
    else{
        printf("Hw");
        printhw(n-1);
        return;
    }
}
*/
