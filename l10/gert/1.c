#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void read_2darray(int a[][100], int n, int m);
void print_2darray(int a[][100], int n, int m);
void min(int a[][100], int n, int m, int row[], int col[]);

int main(){
    int c_row, c_col;
    int A[100], B[100];
    int C[100][100];

    printf("husnegtiin mor, bagana: \n");
    scanf("%d%d", &c_row, &c_col);

    read_2darray(C, c_row, c_col);
    print_2darray(C, c_row, c_col);

    min(C, c_row, c_col, A, B);
    printf("mor buriin min: \n");
    for(int i = 0; i< c_row; i++){
        printf("%d dugaar moriin min: %d\n", i+1, A[i]);
    }

    printf("bagana buriin min: \n");
    for(int j = 0; j < c_col; j++){
        printf("%d dugaar baganii min: %d\n", j+1, B[j]);
    }
    return 0;
}

void read_2darray(int a[][100], int n, int m){
    int i, j;
    printf("husnegtiin elements: \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }
}
void print_2darray(int a[][100], int  n, int m){
    int i, j;
    printf("c husnegt: \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

void min(int a[][100], int n, int m, int row[], int col[]){
    //mor buriin min
    for(int i = 0; i < n; i++){
        int min_r = a[i][0];
        for(int j = 1; j < m; j++){
            if(min_r > a[i][j]){
                min_r = a[i][j];
            }
        }
        row[i] = min_r;
    }
    //bagana buriin min
    for(int i = 0; i < m; i++){
        int min_c = a[0][i];
        for(int j = 1; j < n; j++){
            if(min_c > a[j][i]){     
                min_c = a[j][i];
            }
        }
        col[i] = min_c;
    }
}
