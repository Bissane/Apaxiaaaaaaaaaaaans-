#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func(char* str);
//void del(int n, char* str);

int main()
{
    char txt[50];
    printf("Please enter a phrase with doubled characters : \n");
    scanf("%[^'\n']s", txt);
    func(txt);
    printf("%s\n", txt);
    return 0;

}

void func(char* str){
    int i = 0;
    while(str[i+1]!='\0'){
        if(str[i]==str[i+1]){
            strcpy(str+i+1, str+i+2);
            i--;
        }
        i++;
    }
}


