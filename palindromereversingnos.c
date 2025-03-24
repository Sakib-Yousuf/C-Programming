#include <stdio.h>
int main()
{
    int c,n,m,q=0;
printf("enter the number \n");
scanf("%d",&n);
m=n;
while (n!=0)
{
c=n%10;
printf("%d",c);
n=n/10;
q=q*10+c;

}
if(m==q)
{
    printf("the numbeR IS PALINDROME");
}

else   
    printf("the no is not palindrome");

}