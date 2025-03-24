#include <stdio.h>
int main()
{
    printf("enter the size of array: ");
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &k);

        arr[i] = k;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}