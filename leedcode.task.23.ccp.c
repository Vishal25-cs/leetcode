#include <stdio.h>

void productExceptSelf(int a[], int n, int out[]){
    int left[n], right[n];
    left[0]=1;
    for(int i=1;i<n;i++) left[i]=left[i-1]*a[i-1];
    right[n-1]=1;
    for(int i=n-2;i>=0;i--) right[i]=right[i+1]*a[i+1];
    for(int i=0;i<n;i++) out[i]=left[i]*right[i];
}

int main(){
    int arr[]={1,2,3,4};
    int out[4];
    productExceptSelf(arr,4,out);
    for(int i=0;i<4;i++) printf("%d ",out[i]);
    return 0;
}
