#include <stdio.h>
void max(int a, int b);
int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    max(x,y);
    return 0;
    

}
void max(int a, int b){
    int*spa = &a;
    int*spb = &b;
    if(*spa>*spb){
        printf("%d is max",*spa);

    }
    else if(*spb>*spa){
        printf("%d is max",*spb);

    }
    else{
        printf("both are equal");
    }

    
}