#include <stdio.h>

void sort(int a[][2], int n){
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i][0]>a[j][0]){
                int t0=a[i][0],t1=a[i][1];
                a[i][0]=a[j][0]; a[i][1]=a[j][1];
                a[j][0]=t0; a[j][1]=t1;
            }
}

void merge(int a[][2], int n){
    sort(a,n);
    int s=a[0][0], e=a[0][1];
    for(int i=1;i<n;i++){
        if(a[i][0]<=e) e=(a[i][1]>e?a[i][1]:e);
        else{ printf("[%d,%d]\n",s,e); s=a[i][0]; e=a[i][1];}
    }
    printf("[%d,%d]\n",s,e);
}

int main(){
    int intervals[4][2]={{1,3},{2,6},{8,10},{15,18}};
    merge(intervals,4);
    return 0;
}
