//Reverse of an input number

#include <stdio.h>

int reverse(int n);//declaring function

int main(){
    int x = 0;//initializing x
    printf("Enter the number:");
    scanf("%d",&x);//input number
    printf("The reverse of number is: %d",reverse(x));//calling function
    return 0;
}

int reverse(int n){//defining function
    int num = 0;//initializing num
    while(n>0){
    int ldigit = n%10;//extracting digits
    num = num*10 + ldigit;//storing the result
    n=n/10;
    }
    return num;//returning result
}
