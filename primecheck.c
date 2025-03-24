// WAP to print 10 primes
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("neither prime nor composite"
        );
        return 0;
    }
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            printf("the %d no is not prime ",n);
            return 0;

        }
    };
};