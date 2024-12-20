#include <stdio.h>
#include <math.h>

struct Rational{
    int d, n;
};typedef struct Rational Rational;

Rational add(Rational a, Rational b);
Rational sub(Rational a, Rational b);
Rational mult(Rational a, Rational b);
Rational div(Rational a, Rational b);
Rational simplify(Rational a);
void print(Rational a);
int hieh(int a, int b);

int main(){
    Rational a, b;
    printf("Hoyr engiin butarhai oruulna uu. ");
    printf("d1, n1: ");
    scanf("%d %d", &a.d, &a.n);
    printf("d2, n2: ");
    scanf("%d %d", &b.d, &b.n);

    // int result = add(a, b);
    printf("niilber: %d/%d\n", add(a,b).d, add(a,b).n);
    printf("noogdvor: %d/%d\n", sub(a,b).d, sub(a,b).n);
    printf("urjver: %d/%d\n", mult(a,b).d, mult(a,b).n);
    printf("huvaagaad: %d/%d\n", div(a,b).d, div(a,b).n);
}

int hieh(int hurtver, int huvaari){
    while(huvaari != 0){
        int c = huvaari;
        huvaari = hurtver % huvaari;
        hurtver = c;
    }
    return hurtver;
}

Rational simplify(Rational a){
    int hieh_utga = hieh(abs(a.n), abs(a.d));
    a.n = a.n / hieh_utga;
    a.d = a.d / hieh_utga;
    if (a.d < 0) { 
        a.n = -a.n;
        a.d = -a.d;
    }
    return a;
}

Rational add(Rational a, Rational b){
    Rational niilber;
    niilber.d = a.d * b.n + b.d * a.n;
    niilber.n = a.n * b.n;
    return simplify(niilber);
}

Rational sub(Rational a, Rational b){
    Rational noogdvor;
    noogdvor.d = a.d * b.n - b.d * a.n;
    noogdvor.n = a.n * b.n;
    return simplify(noogdvor);
}

Rational mult(Rational a, Rational b){
    Rational urjver;
    urjver.d = a.d * b.d;
    urjver.n = a.n * b.n;
    return simplify(urjver);
}

Rational div(Rational a, Rational b){
    Rational huvaagaad;
    huvaagaad.d = a.d * b.n;
    huvaagaad.n = a.n * b.d;
    return simplify(huvaagaad);
}





