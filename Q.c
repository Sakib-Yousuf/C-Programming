#include<stdio.h>
void sum( int *k){
    int     m;
    m=*k+3;
    *k=m;
    
    printf("value in fnc %d\n",m);
}
int main(){
    int x=63;
    sum(&x);
    printf("value of mainx %d\n",x);
}

