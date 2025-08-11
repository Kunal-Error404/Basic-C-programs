#include <stdio.h>
void swap(int*a,int*b);
int main(){
    int i;
    int j;
    scanf("%d",&i);
    scanf("%d",&j);
    swap(&i,&j);

    printf("%d %d",i,j);
    return 0;

}
void swap(int*a,int*b){
    int t = *a;
    *a=*b;
    *b=t;

}
