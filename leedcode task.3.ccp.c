#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValid(char* s){
    char stack[100];
    int top=-1;
    for(int i=0;s[i];i++){
        char c=s[i];
        if(c=='('||c=='{'||c=='[') stack[++top]=c;
        else {
            if(top==-1) return false;
            char t=stack[top--];
            if((c==')' && t!='(')||(c==']' && t!='[')||(c=='}' && t!='{'))
                return false;
        }
    }
    return top==-1;
}

int main(){
    char s[]="()[]{}";
    if(isValid(s)) printf("Valid\n");
    else printf("Invalid\n");
    return 0;
}
