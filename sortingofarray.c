#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 5, 4, 3, 6, 7, 9, 8};
    //            0 1 2 3 4 5 6 7 8
    int len = 9;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 1+i; j < len; j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int name=0;name<len;name++)
    {
        printf("%d\t",arr[name]);
    }
}