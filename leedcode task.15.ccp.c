#include <stdio.h>

void moveZeroes(int a[], int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0) a[j++]=a[i];
    }
    while(j<n) a[j++]=0;
}

int main(){
    int a[]={0,1,0,3,12};
    moveZeroes(a,5);
    for(int i=0;i<5;i++) printf("%d ",a[i]);
    return 0;
}
