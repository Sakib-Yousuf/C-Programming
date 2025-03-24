///this prog addds two nums
#include <stdio.h>
int main()
{
    int sum=0,n;
    printf("enter the number: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("the sum upto %d is %d",n,sum);
}