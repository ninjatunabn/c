#include <stdio.h>

void read(int a[], int n);
void print(int a[], int n);
int modul(int x);
int sum(int a[], int n);
int product(int a[], int n);
int avg(int a[], int n);

int main(){
    int a[100], b[100], n;
    printf("n too: \n");
    scanf("%d", &n);
    read(a, n);
    printf("Tanii oruulsan daraalal: ");
    print(a, n);

    int mu, i;
    mu = avg(a, n);
    printf("mu-iin utga: %d\n", mu);
    for(i = 0; i < n; i++)
        b[i] = modul(a[i] - mu);

    print(b, n);
    int alpha;
    alpha = product(b, n);
    printf("alpha-iin utga: %d\n", alpha);
    return 0;
}

void read(int a[], int n){
    int i;
    printf("%d shirheg toog oruulna uu:", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
void print(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

// buhel too ugugduhud moduleiig butsaana
int modul(int x){
    if(x < 0){
        return -x;
    }
    else{
        return x;
    }
}

int sum(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    return sum;
}

int avg(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    return sum / n;
    // float avg_but = sum % n;
}

int product(int a[], int n){
    int m = 1;
    for(int i = 0; i < n; i++){
        m *= a[i];
    }
    return m;
}