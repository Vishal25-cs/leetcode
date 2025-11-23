#include <stdio.h>

int removeDuplicates(int* nums, int numsSize){
    if(numsSize==0) return 0;
    int i=0;
    for(int j=1;j<numsSize;j++){
        if(nums[j]!=nums[i]) nums[++i]=nums[j];
    }
    return i+1;
}

int main(){
    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    int len = removeDuplicates(nums,10);
    printf("New length: %d\nArray: ",len);
    for(int i=0;i<len;i++) printf("%d ",nums[i]);
    return 0;
}
