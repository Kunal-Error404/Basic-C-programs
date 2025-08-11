#include <stdio.h>
const char* temp(int n );
int main(){
    printf("%s",temp(36));
    return 0;

}
const char* temp(int n){
    if(n>25){
        return "hot";
    }
    else{
        return "cold";
    }
}
