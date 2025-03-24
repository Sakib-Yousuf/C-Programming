#include <stdio.h>
int main()
{
int n;

    puts("enter the number u want to check");
scanf("%d",&n);
for(int j=2;j<n;j++)
{
if(n%j==0)
{
    puts("not prime");
    exit(0);
}
else 
{
    puts("peime");
}
}


printf("hi sakib");

}