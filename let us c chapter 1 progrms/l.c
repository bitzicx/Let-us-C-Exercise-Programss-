// If the total selling price of 15 items and the total profit earned on them is input through the keyboard, 
// write a program to find the cost price of one item.'

#include<stdio.h>
int main(){
    float cost_price, selling_price, profit;
    printf("Enter the total selling price and profit of 15 items: ");
    scanf("%f %f", &selling_price, &profit);
    cost_price = (selling_price - profit)/15;
    printf("The cost price of one item is %f$", cost_price);

}