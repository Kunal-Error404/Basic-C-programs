#include <stdio.h>
#include <string.h>
void rev(char arr[]);

int main(){
    int n;
    scanf("%d",&n);
    getchar();
    char arr[n+1];
    fgets(arr,n+1,stdin);
    int l = strlen(arr);

    if(arr[l-1]=='\n'){
        arr[l-1]='\0';
        l--;
    }
    for(int i = 0;i<l/2;i++){
        int cur =  arr[i];
        int rev = arr[l-i-1];
         arr[l-i-1]=cur;
        arr[i];

    }
    for(int i = 0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    return 0;
}
void rev(char arr[]){

}