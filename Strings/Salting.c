//Find the salted form of a password entered by a user if the salt is abc123

#include <stdio.h>
#include <string.h>

//void enter(char arr[]);//No defination of size required eg int n

int main(){
    char pass[500];
    fgets(pass,500,stdin);
    //enter(pass);
    //puts(pass);
    char salt[]="abc123";
    strcat(pass,salt);//this catenates two strings and stores the value in the first string eg pass
    printf("%s",pass);
    return 0;

    


}
/*void enter(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        scanf("%c",&arr[i]);
        //or scanf("%c",arr)// as arr is a pointer
    }
}*/