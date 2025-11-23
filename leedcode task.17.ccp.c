#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char s[]){
    int last[256]; for(int i=0;i<256;i++) last[i]=-1;
    int start=0,maxlen=0;
    for(int i=0;s[i];i++){
        if(last[(int)s[i]]>=start) start=last[(int)s[i]]+1;
        last[(int)s[i]]=i;
        if(i-start+1>maxlen) maxlen=i-start+1;
    }
    return maxlen;
}

int main(){
    char s[]="abcabcbb";
    printf("Length of longest substring: %d\n",lengthOfLongestSubstring(s));
    return 0;
}
