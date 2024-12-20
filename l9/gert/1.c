#include <stdio.h>

int palindrome(int a);

int main(){
    int a;
    printf("a toog oruulna uu: ");
    scanf("%d", &a);

    if(palindrome(a)){
        printf("%d is palindrome", a);
    }
    else{
        printf("%d is not palindrome", a);
    }
}
int palindrome(int a){
    int original = a;    
    int reversed = 0;  
    int remainder;

    while (a != 0) {
        remainder = a % 10;  
        // printf("uldegdel: %d\n", remainder);         
        reversed = reversed * 10 + remainder; 
        a /= 10;                       
    }

    if(original == reversed){
        return 1;
    }
    return 0;
}