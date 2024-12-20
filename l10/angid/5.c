#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_valid(char pwd[]);

int main(){
    char pwd[100];
    printf("passwordoo oruulna uu: ");
    fgets(pwd, sizeof(pwd), stdin);

    size_t len = strlen(pwd);
    if (len > 0 && pwd[len - 1] == '\n') {
        pwd[len - 1] = '\0';
    }

    if (is_valid(pwd)) {
        printf("Password is valid.\n");
    } else {
        printf("Password is invalid.\n");
    }

    return 0;

}
int is_valid(char pwd[]){
    int urt = strlen(pwd);
    int capital = 0;
    int num_cnt = 0;
    int special = 0;

    if(urt < 6){
        printf("urt ni ydaj 6 baih!!\n");
        return 0;
    }
    for (int i = 0; i < urt; i++) {
        if (isupper(pwd[i])) {
            capital = 1;
        }
        if (isdigit(pwd[i])) {
            num_cnt++;
        }
        if (strchr("?!$,*-+", pwd[i])) {
            special = 1;
        }
    }

    if(!capital){
        printf("Dor hayj neg tom useg orson baih!!\n");
    }
    if(num_cnt < 3){
        printf("ydaj 3n shirheg too orson baih!!\n");
    }
    if(!special){
        printf("?!$,*-+ temdegtuudiin ali neg ni orson baih!!\n");
    }

    if (capital && num_cnt >= 3 && special) {
        return 1;  // Password is valid
    } else {
        return 0;  // Password is invalid
    }

}