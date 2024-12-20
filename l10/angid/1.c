#include <stdio.h>

int count(char s[]);

int main(){
    char s[100];
    printf("string: ");
    fgets(s, sizeof(s), stdin);
    printf("%d\n", count(s));
}
int count(char s[]){
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        char ss = s[i];
        if(ss == 'a' || ss == 'e' || ss == 'i' || ss == 'o' || ss == 'u' ||
        ss == 'A' || ss == 'E' || ss == 'I' || ss == 'O' || ss == 'U'){
            count++;
        }
    }
    return count;
}