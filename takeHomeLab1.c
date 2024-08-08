#include<stdio.h>

int strlenFor(char str[]){
    int len=0;
    for (int i=0; str[i]!='\0'; i++){
        len++;
    }
    return len;
}

int strlenWhile(char str[]){
    int len=0;
    int i=0;
    while (str[i]!=0){
        len++;
        i++;
    }
    return len;
}

int main(){

    //strlen()
    char str[]={'a','b','c'};
    printf("%d %d", strlenFor(str), strlenWhile(str));

    return 0;
}
