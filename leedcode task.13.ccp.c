#include <stdio.h>

int singleNumber(int* nums, int n){
    int res=0;
    for(int i=0;i<n;i++) res ^= nums[i];
    return res;
}

int main(){
    int nums[]={4,1,2,1,2};
    printf("Single Number: %d\n", singleNumber(nums,5));
    return 0;
}
