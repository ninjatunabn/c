#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct cstmr
{
    char nevtreh_ner[30], nuuts_ug[30];
}; typedef struct cstmr cstmr;

int check(char u[], char p[]);

int main(){
    printf("nevtreh ner oruulna uu: \n");
    char u[100];
    fgets(u, sizeof(u), stdin);
    u[strcspn(u, "\n")] = '\0';
    printf("nuuts ug oruulna uu: \n");
    char p[100];
    fgets(p, sizeof(p), stdin);
    p[strcspn(p, "\n")] = '\0';

    if (check(u, p)) {
        printf("Amjilttai nevterlee!\n");
    } else {
        printf("Buruu nevtreh ner esvel nuuts ug!\n");
    }
    return 0;
}

int check(char u[], char p[]){
    cstmr neg, hoyr, gurav, duruv;
    strcpy(neg.nevtreh_ner, "bat");
    strcpy(neg.nuuts_ug, "123456");

    strcpy(hoyr.nevtreh_ner, "dorj");
    strcpy(hoyr.nuuts_ug, "password");

    strcpy(gurav.nevtreh_ner, "bold");
    strcpy(gurav.nuuts_ug, "pass247");

    strcpy(duruv.nevtreh_ner, "tsetsgee");
    strcpy(duruv.nuuts_ug, "justinbieber");

    if ((strcmp(u, neg.nevtreh_ner) == 0 && strcmp(p, neg.nuuts_ug) == 0) ||
        (strcmp(u, hoyr.nevtreh_ner) == 0 && strcmp(p, hoyr.nuuts_ug) == 0) ||
        (strcmp(u, gurav.nevtreh_ner) == 0 && strcmp(p, gurav.nuuts_ug) == 0) ||
        (strcmp(u, duruv.nevtreh_ner) == 0 && strcmp(p, duruv.nuuts_ug) == 0)) {
        return 1; 
    } else {
        return 0;
    }
}