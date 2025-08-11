#include <stdio.h>
int power(int n, int p);

int main(){
    printf("%d",power(4,3));
    return 0;
}

int power(int n, int p){
  
    if (p==0){
        return 1;
    }
int powerM1 = power(n,p-1);
int powerp = n*powerM1;
return powerp;
}