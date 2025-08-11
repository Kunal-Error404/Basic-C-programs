#include <stdio.h>
int main(){
    char alpha = 'a';
    for(char*ptr = &alpha;*ptr<='z';(*ptr)++){
        printf("%c\n",*ptr);

    }

}
