//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main(){


    float cost_price = 500.0;
    float selling_price = 600.0;
    float profit, loss, profit_percentage, loss_percentage;

    if(selling_price > cost_price){
        profit = selling_price - cost_price;
        profit_percentage = (profit / cost_price) * 100;
        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", profit_percentage);
    }
    else if(cost_price > selling_price){
        loss = cost_price - selling_price;
        loss_percentage = (loss / cost_price) * 100;
        printf("Loss: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", loss_percentage);
    }
    else{
        printf("No Profit No Loss\n");
    }

    return 0;
}