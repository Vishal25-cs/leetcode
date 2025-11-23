#include <stdio.h>

int maxArea(int height[], int n){
    int i=0,j=n-1,max=0;
    while(i<j){
        int h=(height[i]<height[j])?height[i]:height[j];
        int area=h*(j-i);
        if(area>max) max=area;
        if(height[i]<height[j]) i++;
        else j--;
    }
    return max;
}

int main(){
    int arr[]={1,8,6,2,5,4,8,3,7};
    printf("Max area: %d\n",maxArea(arr,9));
    return 0;
}
