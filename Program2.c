#include <stdio.h>
#include <string.h>
typedef struct Emp{
    char name[50];
    float basic_pay;
    float gross_sal;
}emp;
float calc(int bpay);
void data(emp arr[],int n);

int main(){
    int n=0;
    printf("ENTER THE NUMBER OF EMPLOYEES\n");
    scanf("%d",&n);
    emp arr[n];
    data(arr,n);
    return 0;


}
float calc(int bpay){
    float sum = 0;
    sum = bpay + 0.52*bpay;
    return sum;
}
void data(emp arr[],int n){
    for(int i = 0;i<n;i++){
        
        printf("Enter the name of the employee:\n");
        scanf("%s",&arr[i].name);
       // fgets(arr[i].name,51,stdin);
        printf("Enter the basic pay:\n");
        scanf("%f",&arr[i].basic_pay);
        printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
        printf("The name of the employee is: %s\n",arr[i].name);
        printf("The gross salary is: %.2f\n",calc(arr[i].basic_pay));
        printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

        
    }
    

}
