#include <stdio.h>
#include <stdlib.h>

void array();
void save(int data,int index);

int main()
{
    array();
}

void array()
{int arr[50];
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
            // printf("%d\t",j);
            arr[count]=j;
            count++;
        }
        if (count == 50)
        {
            break;
        }
    }

    for(int i=0;i<50;i++)
    {
        printf("%d\t",arr[i]);
    }
}