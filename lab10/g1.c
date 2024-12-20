#include <stdio.h>

struct student {
    char fname[20], lname[20], id[101];
    float golch;
} 

typedef struct student student;
void read_students(student a[], int n);
void print_students(student a[], int n);
void print(student st);
int search_by_fname(student a[], int n, char fname[]);
int search_by_lname(student a[], int n, char lname[]);
int search_by_id(student a[], int n, char id[]);
int search_by_golch(student a[], int n, float golch[]);
void sort_by_golch(student a[], int n);

int main()
{
    student a[100];
    int n, cmd, idx;
    printf("oyutnii too: ");
    scanf("%d",&n);
    read_students(a, n);
    print_students(a, n);
    char fname[20], lname[20], id[20];
    float golch;
    while(1)
    {
        printf("1: nereer haih, 2: ovgoor haih, 3: id-aar haih, 4: golchoor haih, 5: golchoor erembelehe, 6: hevleh, 7: garah\n");
        scanf("%d", &cmd);
        if(cmd==1)
        {
            printf("haih ner: ");
            scanf("%s", fname);
            idx = search_by_fname(a, n, fname);
            if(idx == -1)
                printf("oyutan oldsongui\n");
            else
                print(a[idx]);
        }
        else if (cmd==2)
        {
            printf("haih ovog: ");
            scanf("%s", lname);
            idx = search_by_lname(a, n, lname);
            if(idx==-1)
                printf("oyutan oldsongui]\n");
            else
                printf(a[idx]);
        }
        else if(cmd==3)
        {
            printf("haih id: ");
            scanf("%s", id);
            idx = search_by_id(a, n, id);
            if (idx == -1)
                printf("oyutan oldsongui\n");
        }
    }
}
