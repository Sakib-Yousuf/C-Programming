
#include <stdio.h>
void printarr(int*,int);
int main()
{
    int n;
    printf("Enter the of elements of array\n");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("enter the element\n: %d\t", i+1);
        scanf("%d",&arr[i]);
    }

    printarr(arr,n);

}
void printarr(int *xpr, int size)
{
    for (int i=0;i<size;i++)
    {
        printf("%d\t",*(xpr+i));
    }
}
