#include <stdio.h>
#include <stdlib.h>

void array();
int main()
{
    array();
}
void array()
{
    int count = 0, fact = 0;
    for (int j = 2;; j++)
    {
    fact=0;
        for (int i = 1; i <= j; i++)
        {
          
            if(j%i==0)
            {
                fact++;
            }
            
        }
        if(fact==2)
        {
            printf("%d\t",j);
            
            count++;
        }
        if (count == 50)
        {
            exit(0);
        }
    }
}
//nbew
