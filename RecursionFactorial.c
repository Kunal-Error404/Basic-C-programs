#include <stdio.h>
int fact(int n);
int main(){
    int m;
    scanf("%d",&m);
    printf("factorial of the selected number is:%d\n",fact(5));
    return 0;

}
int fact(int n){
    if (n == 1){
        return 1;
    }
   int factNm1 = fact(n-1);
   int factn = factNm1*n;
   return factn;
}