#include <stdio.h>
#include <string.h>

typedef struct student{
    char name[50];
    char year[50];
    int sap;
}data;

int main(){
    data K1;{
        strcpy(K1.name,"Kunal");
        strcpy(K1.year,"First");
        K1.sap = 590025510;
    };
printf("=====================================\n");
printf("Name: %s\n",K1.name);
printf("Year: %s\n",K1.year);
printf("SAP: %9d\n",K1.sap);
    data A1;
    data *ptr = NULL;
    ptr = &A1;
    
}