//
// Created by Kaya Ota on 2018/12/27.
//

//sample input :while (abc > 10) { abc = abc - 1; }
//while (abc > 3.14) { abc = abc - 20; }

#include <stdio.h>
#include <ctype.h>
int main(){
    int ch;
    while((ch = getchar()) != '\n'){
        if(ch <= '\0'){ //treat empty char \n or \t
            continue;
        }
        //printf("ch = %c\n",ch);
        if (isalpha(ch)){
            printf("ID: %c", ch);
            while(isalnum(ch=getchar())){
                putchar(ch);
            }
            ungetc(ch, stdin);
            putchar('\n');
        }else if(isdigit(ch)){
            printf("NM: %c", ch);
            while(isdigit(ch=getchar()) || ch == '.'){
                putchar(ch);
            }
            ungetc(ch,stdin);
            putchar('\n');
        }else {
            printf("SY: %c\n", ch);
        }
    }//while
}