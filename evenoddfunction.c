#include <stdio.h>
void even()
{

    for (int i = 2; i < 22; i = i + 2)
    {

        printf("the even no r:%d\n", i);
    }
}
void odd()
{
    for (int i = 1; i < 20; i = i + 2)
    {
        printf("the odd are %d:\n", i);
    }
}
int main()
{

    int num;
    printf("enter the no 1 or 2");
    scanf("%d", &num);
    if (num == 1)
    {
        even();
    }
    else if(num == 2){
    

        odd();
    }
    else {
       printf("invlid numbr");
    }
}
