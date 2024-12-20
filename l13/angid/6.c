#include <stdio.h>
#include <string.h>

struct Student{
    char fname[20], iname[20], id[10];
    float golch;
};

void read(struct Student *s);
void print(struct Student s);
void set_fname(struct Student *p, char ner[]);
void set_iname(struct Student *p, char ovog[]);
void set_id(struct Student *p, char id[]);
void set_golch(struct Student *p, float golch);
 
int main(){
    struct Student bat, t;
    read(&bat);
    print(bat);

    set_fname(&t, "dorj");
    set_iname(&t, "bold");
    set_id(&t, "1234");
    set_golch(&t, 3);

    print(t);
    return 0;
}

void read(struct Student *s){
    char fn[20], in[20], i[10], g_str[10];
    float g;
    printf("Ovog, Ner, Id, golch: \n");
    // fgets(fn, sizeof(fn), stdin);
    // fgets(in, sizeof(in), stdin);
    // fgets(i, sizeof(i), stdin);
    // fgets(g_str, sizeof(g_str), stdin);
    // sscanf(g_str, "%f", &g);
    // fn[strcspn(fn, "\n")] = '\0';
    // in[strcspn(in, "\n")] = '\0';
    // i[strcspn(i, "\n")] = '\0';

    // s -> fname[20] = fn[20];
    // s -> iname[20] = in[20];
    // s -> id[10] = i[10];
    // s -> golch = g;
    strcpy(s->fname, fn);
    strcpy(s->iname, in);
    strcpy(s->id, i);
    s->golch = g;
}

void print(struct Student s){
    printf("%s %s %s %.2f\n", s.fname, s.iname, s.id, s.golch);
}

void set_fname(struct Student *p, char ner[]){
    // p -> fname[20] = ner[20];
    strcpy(p->fname, ner);
}
void set_iname(struct Student *p, char ovog[]){
    // p -> iname[20] = ovog[20];
    strcpy(p->iname, ovog);
}
void set_id(struct Student *p, char id[]){
    // p -> id[10] = id[10];
    strcpy(p->id, id);
}
void set_golch(struct Student *p, float golch){
    p -> golch = golch;
}

