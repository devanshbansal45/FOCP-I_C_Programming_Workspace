#include<stdio.h>
int main(void){
int a,b;
int quotient,remainder;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
quotient = a/b;
remainder = a%b;
printf("Quotient = %d\n",quotient);
printf("Remainder = %d\n",remainder);



    return 0;
}
