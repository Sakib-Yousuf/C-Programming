// Author:sakura
// Purpose:Scannig an array using the for loop
// Date:13-05-2024

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the number of %d",i+1);
        scanf("%d",arr[i]);
    }
}