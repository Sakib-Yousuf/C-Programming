#include <stdio.h>
int main()
{
    int arr[] = {1, 4, 3, 2};
    int len = 4;
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int s = 0; s < len; s++)
        printf("%d\t", arr[s]);
};
