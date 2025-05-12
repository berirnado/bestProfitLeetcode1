#include <stdio.h>

int maxProfit(int* prices, int pricesSize){
    int min = 0;
    int profit = 0;

    for(int i = 0; i < pricesSize; i++){
        if(prices[i] < min || i == 0){
            min = prices[i];
        }else{
            if(prices[i] - min > profit){
                profit = prices[i] - min;
            }
        }

    }

    return profit;
}

void main(){
    int prices[] = {7,1,5,3,6,4};

    printf("%d", maxProfit(prices, sizeof(prices)/sizeof(int)));
}