#include <stdio.h>
#include <math.h>

// int a=0;    
// int b=1;    
// int c=1;   
// int d=1;    
// int e=0;    
// int f=1;    

// int main(){
//     a || printf ("o") && c;
//     c && d || printf ("x") ;          //ORiin ariig hayhiin tuld 0 heregtei
//     (d || e) && f || printf ("x") ;   //ehnii AND 1 garah heregtei
//     a + e == 1 && printf ("x") ;
//     b && printf("o");
//     e && d || printf ("o") ;
// }

int a=0;
int b=0;        
int c=1;        //tru
int d=1;        
int f=1;        //tru

int main(){

    a || printf("o") && c;          //high priority &&, c==1, a can be both
    c && d || printf("x");          //c&&d must be 1 in order to skip print x, d==1
    (d || b) && f || printf("x");   //((d || b) && f) must be 1, f==1, b can be both
    a + b == 1 && printf("x");      //a+b==1 must be 0 to skip print x, one of them cannot be 1, a==b
    f && printf("o");               //f must be 1
    b && d || printf("o");          //b&&d can be both
    b + d == 3 && printf("o");      

    
    // a || printf("o") && c;      //c=1
    // f && printf("o");           //f=1
    // b && d || printf("o");      //b,d=1
    // b + d == 3 && printf("o");  
}