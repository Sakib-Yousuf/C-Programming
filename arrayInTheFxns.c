//this code is done by sakib
#include <stdio.h>
void sakura(int n);
int main()
{
    sakura(18);
}
void sakura(int n)
{
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the value: ");
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}