#include <stdio.h>

int maxProfit(int* prices, int pricesSize){
    int min = 0;
    int minIndex = 0;
    int max = 0;
    int maxIndex = 0;
    for(int i = 0; i < pricesSize; i++){
        if(prices[i] < min || i == 0){
            min = prices[i];
            minIndex = i;
        }
        if(prices[i] > max || i == 0){
            max = prices[i];
            maxIndex = i;
        }
    }
}

void main(){
    int prices[] = {7,1,5,3,6,4};

    maxProfit(prices, sizeof(prices)/sizeof(int));
}