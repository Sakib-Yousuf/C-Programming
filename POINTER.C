#include<stdio.h>
#include<stdlib.h>
int main(){
int x,y,z;
x=33,y=54,z=0;
int *b;
b=&z;
*b=x+y;
printf("%d\t",z);
printf("%d",*b);



}