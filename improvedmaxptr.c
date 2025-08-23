#include <stdio.h>
void max(int* a, int* b);
int main(){
    int x,y;
    printf("ENTER YOUR FIRST NUMBER:\n");
    scanf("%d",&x);
    printf("ENTER YOUR SECOND NUMBER:\n");
    scanf("%d",&y);
    max(&x,&y);
    return 0;
    

}
void max(int* a, int* b){
    if(*a>*b){
        printf("%d is max",*a);
    } 
    else if(*b>*a){
         printf("%d is max",*b);

    }
    else{
         printf("both are equal");
    }
}
   