#include <stdio.h>

int search(int a[], int n, int target){
    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==target) return m;
        if(a[l]<=a[m]){
            if(target>=a[l] && target<a[m]) r=m-1;
            else l=m+1;
        }else{
            if(target>a[m] && target<=a[r]) l=m+1;
            else r=m-1;
        }
    }
    return -1;
}

int main(){
    int a[]={4,5,6,7,0,1,2};
    printf("Index: %d\n",search(a,7,0));
    return 0;
}
