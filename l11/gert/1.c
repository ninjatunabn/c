#include <stdio.h>
#include <math.h>
#include <string.h>

struct student
{
    char fname[20], iname[20], id[10];
    float golch;
}; typedef struct student student;

void read_student(student a[], int n);
void print_student(student a[], int n);
void print(student st);
int search_by_fname(student a[], int n, char fname[]);
int search_by_iname(student a[], int n, char iname[]);
int search_by_id(student a[], int n, char id[]);
int search_by_golch(student a[], int n, float golch);
void sort_by_golch(student a[], int n);

int main(){
    student a[100];
    int n, cmd, idx;
    printf("oyutnii too: ");
    scanf("%d", &n);
    read_student(a, n);
    print_student(a, n);
    char fname[20], iname[20], id[20];
    float golch;
    while (1){
        printf("1. nereer haih, 2.ovgoor haih, 3. ID-aar hair, 4. Golchoor hair, 5. Golchoor erembeleh, 6. Hevleh, 7. Garah\n");
        scanf("%d", &cmd);
        if(cmd == 1){
            printf("Haih ner: ");
            scanf("%s", fname);
            idx = search_by_fname(a, n, fname);
            if( idx == -1)
                printf("Oyutan oldsongui\n");
            else
                print(a[idx]);
        }
        else if(cmd == 2){
            printf("Haih ovog: ");
            scanf("%s", iname);
            idx = search_by_iname(a, n, iname);
            if( idx == -1)
                printf("Oyutan oldsongui\n");
            else
                print(a[idx]);
        } 
        else if(cmd == 3){
           printf("Haih id: ");
            scanf("%s", id);
            idx = search_by_id(a, n, id);
            if( idx == -1)
                printf("Oyutan oldsongui\n");
            else
                print(a[idx]);
        } 
        else if(cmd == 4){
           printf("Haih golch: ");
            scanf("%f", &golch);
            idx = search_by_golch(a, n, golch);
            if( idx == -1)
                printf("Oyutan oldsongui\n");
            else
                print(a[idx]);
        } 
        else if(cmd == 5){
            sort_by_golch(a, n);
            print_student(a, n);
        }
        else if(cmd == 6){
            print_student(a, n);
        }
        else 
            break;
    }
    return 0;
}

void print(student st){
    printf("Ner: %s\n", st.fname);
    printf("Ovog: %s\n", st.iname);
    printf("id: %s\n", st.id);
    printf("golch: %f\n", st.golch);
}

void read_student(student a[], int n){
    printf("oyutnii medeelliig oruulna uu:(ner, ovog, id, golch) \n");
    for (int i = 0; i < n; i++){
        printf("oyutan %d: ", i+1);
        scanf("%s", &a[i].fname);
        scanf("%s", &a[i].iname);
        scanf("%s", &a[i].id);
        scanf("%f", &a[i].golch);
    }
}

void print_student(student a[], int n){
    for (int i = 0; i < n; i++){
        printf("oyutnii ner: %s\n", a[i].fname);
        printf("oyutnii ovog: %s\n", a[i].iname);
        printf("oyutnii id: %s\n", a[i].id);
        printf("oyutnii golch: %.2f\n", a[i].golch);
    }
}

int search_by_fname(student a[], int n, char fname[]){
    for(int i = 0; i < n; i++){
        if(strcmp(a[i].fname, fname) == 0){
            return i;
        }
    }
    return -1;
}

int search_by_iname(student a[], int n, char iname[]){
    for(int i = 0; i < n; i++){
        if(strcmp(a[i].iname, iname) == 0) {
            return i;
        }
    }
    return -1;
}

int search_by_id(student a[], int n, char id[]){
    for(int i = 0; i < n; i++){
        if(strcmp(a[i].id, id) == 0) {
            return i;
        }
    }
    return -1;
}

int search_by_golch(student a[], int n, float golch){
    for(int i = 0; i < n; i++){
        if(a[i].golch == golch){
            return i;
        }
    }
    return -1;
}

//bubble sort
void sort_by_golch(student a[], int n){
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j].golch < a[j + 1].golch) { 
                student temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}