#include <stdio.h>
#include <string.h>

char *map[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void combine(char* digits, int index, char* current){
    if(digits[index]=='\0'){ printf("%s\n",current); return;}
    int d=digits[index]-'0';
    for(int i=0;i<strlen(map[d]);i++){
        current[index]=map[d][i];
        combine(digits,index+1,current);
    }
}

int main(){
    char digits[]="23";
    char current[100];
    current[strlen(digits)]='\0';
    combine(digits,0,current);
    return 0;
}
