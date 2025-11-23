#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                int* ans = (int*)malloc(2*sizeof(int));
                ans[0]=i; ans[1]=j;
                *returnSize=2;
                return ans;
            }
        }
    }
    *returnSize=0;
    return NULL;
}

int main(){
    int nums[] = {2,7,11,15};
    int size;
    int* ans = twoSum(nums,4,9,&size);
    printf("Indices: %d %d\n", ans[0], ans[1]);
    free(ans);
    return 0;
}
