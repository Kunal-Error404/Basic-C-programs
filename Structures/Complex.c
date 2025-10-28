#include <stdio.h>
typedef struct Complex_Number{
    float real;
    float imag;
}Comp;
void add(Comp N1, Comp N2);
void sub(Comp N1, Comp N2);
void display(float a, float b);

int main(){
    Comp N1;
    Comp *ptr1 = NULL;//intialising
    ptr1 = &N1;
    Comp N2;
    Comp *ptr2 = NULL;
    
    ptr2 = &N2;

    printf("ENTER REAL PART OF NUMBER 1:\n");
    scanf("%f",&ptr1->real);
    printf("ENTER IMAGINARY PART OF NUMBER 1:\n");
    scanf("%f",&ptr1->imag);
    printf("ENTER REAL PART OF NUMBER 2:\n");
    scanf("%f",&ptr2->real);
    printf("ENTER IMAGINARY PART OF NUMBER 2:\n");
    scanf("%f",&ptr2->imag);
    printf("THE SUM OF 2 COMPLEX NUMBERS IS:\n");
    add(N1,N2);
    printf("THE DIFFERENCE OF 2 COMPLEX NUMBERS IS:\n");
    sub(N1,N2);

    return 0;
}
void display(float a, float b){ 

    printf(" %.2f + i%.2f", a, b);

}

void add(Comp N1, Comp N2){

    float sum1 = 0;
    float sum2 = 0;
   
    sum1 = N1.real+N2.real;
    sum2 = N1.imag+N2.imag;

    display(sum1,sum2);
}
void sub(Comp N1, Comp N2){

    float diff1 = 0;
    float diff2 = 0;

    diff1= N1.real-N2.real;
    diff2= N1.imag-N2.imag;

    display(diff1,diff2);
}


