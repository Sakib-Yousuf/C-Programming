
#include <stdio.h>
int main()
{
    for (int i = 1; i < 6; i++)
    {
        if(i == 3)
        {
            continue;
        }

        printf("%d\n",i);
    }
    printf("end");
}
//not hello