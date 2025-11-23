#include <stdio.h>

void merge(int* nums1, int m, int* nums2, int n){
    int i=m-1,j=n-1,k=m+n-1;
    while(i>=0 && j>=0){
        if(nums1[i]>nums2[j]) nums1[k--]=nums1[i--];
        else nums1[k--]=nums2[j--];
    }
    while(j>=0) nums1[k--]=nums2[j--];
}

int main(){
    int nums1[6]={1,2,3,0,0,0};
    int nums2[3]={2,5,6};
    merge(nums1,3,nums2,3);
    for(int i=0;i<6;i++) printf("%d ",nums1[i]);
    return 0;
}
