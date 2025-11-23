#include <stdio.h>

int maxSubArray(int* nums, int numsSize){
    int max=nums[0], cur=nums[0];
    for(int i=1;i<numsSize;i++){
        cur = (cur+nums[i] > nums[i]) ? cur+nums[i] : nums[i];
        if(cur>max) max=cur;
    }
    return max;
}

int main(){
    int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
    printf("Max Subarray Sum: %d\n", maxSubArray(nums,9));
    return 0;
}
