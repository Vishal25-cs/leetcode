#include <stdio.h>
#include <string.h>

int expand(char* s,int left,int right){
    int n=strlen(s);
    while(left>=0 && right<n && s[left]==s[right]){ left--; right++;}
    return right-left-1;
}

int main(){
    char s[]="babad";
    int start=0, end=0;
    int n=strlen(s);
    for(int i=0;i<n;i++){
        int len1=expand(s,i,i);
        int len2=expand(s,i,i+1);
        int len=(len1>len2?len1:len2);
        if(len>end-start+1){
            start=i-(len-1)/2;
            end=i+len/2;
        }
    }
    printf("Longest Palindrome: ");
    for(int i=start;i<=end;i++) printf("%c",s[i]);
    printf("\n");
    return 0;
}
