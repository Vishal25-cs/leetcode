#include <stdio.h>

void sort(int a[], int n){
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]>a[j]){
                int t=a[i]; a[i]=a[j]; a[j]=t;
            }
}

void threeSum(int a[], int n){
    sort(a,n);
    for(int i=0;i<n-2;i++){
        int l=i+1,r=n-1;
        while(l<r){
            int sum=a[i]+a[l]+a[r];
            if(sum==0){ printf("%d %d %d\n",a[i],a[l],a[r]); l++; r--;}
            else if(sum<0) l++;
            else r--;
        }
    }
}

int main(){
    int arr[]={-1,0,1,2,-1,-4};
    threeSum(arr,6);
    return 0;
}
