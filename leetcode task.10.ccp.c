#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x){
    if(x<0) return false;
    int orig=x,rev=0;
    while(x){
        rev=rev*10 + x%10;
        x/=10;
    }
    return rev==orig;
}

int main(){
    int num=121;
    if(isPalindrome(num)) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
