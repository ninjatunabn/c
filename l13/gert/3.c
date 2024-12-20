#include <stdio.h>

struct Rational{
    int d, n;       //d/n
}

Rational add(const Rational *a, const Rational *b);
Rational sub(const Rational *a, const Rational *b);
Rational mult(const Rational *a, const Rational *b);
Rational div(const Rational *a, const Rational *b);
void simplify(Rational *a);
void read(Rational *a);
void print(Rational *a);

int main(){
    struct Rational a, b;
    read(&a);
    read(&b);
}

void read(Rational *a){
    int d, n;
    scanf("%d %d", &da, &na);
    *a -> d = da;
    *a -> n = na;
}