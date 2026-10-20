#include<stdio.h>
int main(){
    float price;
    int quantity;
float total;
printf("Enter the price of one item: ");
scanf("%f", &price);
printf("Enter quantity: ");
scanf("%d", &quantity);

total = price*quantity;
  printf("Total Bill = %.2f\n", total);
  return 0;
}