#include <stdio.h>

int main(){
    int n, m;
    printf("husnegtiin mur, baganiin toog oruulna uu: \n");
    scanf("%d%d", &n, &m);
    int a[n][m];
    printf("enter array elements(%d shirheg too):\n", n*m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    // col 
    int count_col[m];
    for(int i=0; i<m; i++){
        count_col[i]=0;
    }

    for(int i=0; i<m; i++){     //bagana
        for(int j=0; j<n; j++){ //mur
            if((a[j][i])%2==0){
                count_col[i]++;
            }
        }
    }
    int max = count_col[0];
    for(int i=1; i<m; i++){
        if(max < count_col[i])
            max = count_col[i];
    }

    // tentsuu toonii tegsh too aguulah bagana
    printf("hamgiin ih tegsh too aguulsan bagana:\n");
    // printf("%d", max);
    for(int i=0; i<m; i++){
        if(count_col[i]==max){
            printf("%d ", i+1);
        }
    }
    // printf("hamgiin ih tegsh too aguulsan bagana: %d", max);
}