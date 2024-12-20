#include <stdio.h>
#include <math.h>

struct Point
{
    int x, y;
};

double distance(struct Point a, struct Point b);

int main(){
    struct Point a, b;
    printf("a tsegiin x, y: ");
    scanf("%d %d", &a.x, &a.y);
    printf("b tsegiin x, y: ");
    scanf("%d %d", &b.x, &b.y);
    
    printf("hoyr tsegiin hoorondoh zai %.2f", distance(a,b));
}

double distance(struct Point a, struct Point b){
    double d = sqrt(((b.x - a.x) * (b.x - a.x)) + ((b.y - a.y) * (b.y - a.y)));
    return d;
}