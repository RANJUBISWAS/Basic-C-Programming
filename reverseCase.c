#include<stdio.h>
#include<ctype.h>
void main(){
    char ch;
    ch = getchar();
    if(islower(ch)){
        putchar(toupper(ch));
    }
    else putchar(tolower(ch));
}
