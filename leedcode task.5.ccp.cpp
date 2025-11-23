#include <stdio.h>

int maxProfit(int* prices, int pricesSize){
    int min=prices[0], maxP=0;
    for(int i=1;i<pricesSize;i++){
        if(prices[i]<min) min=prices[i];
        else if(prices[i]-min>maxP) maxP=prices[i]-min;
    }
    return maxP;
}

int main(){
    int prices[] = {7,1,5,3,6,4};
    printf("Max Profit: %d\n", maxProfit(prices,6));
    return 0;
}
