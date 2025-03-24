#include <stdio.h>
int main()
{
    for (int i = 1; i < 6; i++)
    {
        if(i == 3)
        {
            break;
        }

        printf("%d\n",i);
    }
    printf("end");
}
