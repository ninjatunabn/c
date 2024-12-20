#include <stdio.h>
#include <math.h>

typedef struct {
    int x, y;
} Point;

typedef struct {
    Point A, B, C;
} Triangle_P;

double distance(Point a, Point b);
double find_area(Triangle_P tria);

int main(){
    Triangle_P tria;
    printf("Ehnii tsegiin x, y: ");
    scanf("%d %d", &tria.A.x, &tria.A.y);
    printf("Hoyr dahi tsegiin x, y: ");
    scanf("%d %d", &tria.B.x, &tria.B.y);
    printf("Gurav dahi tsegiin x, y: ");
    scanf("%d %d", &tria.C.x, &tria.C.y);

    double s = find_area(tria);
    printf("gurvaljinii talbai: %.2f\n", s);
    return 0;
}

double distance(Point a, Point b ){
    return sqrt(((b.x - a.x) * (b.x - a.x)) + ((b.y - a.y) * (b.y - a.y)));
}


double find_area(Triangle_P tria){

    double a = distance(tria.A, tria.B);
    double b = distance(tria.B, tria.C);
    double c = distance(tria.C, tria.A);

    double p = (a + b + c) / 2.0;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}