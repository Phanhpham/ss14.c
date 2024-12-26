#include <stdio.h>
int swapped = 0;
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int checkStop = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            ;
        {
            break;
        }
    }
}
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {64, 56, 33, 11, 23, 45, 42};
    int n = sizeof(arr);
    printf("mang ban dau:");
    printArr(arr, n);

    bubbleSort(arr, n);
    printf("mang sau khi sap xep :");
    printArr(arr, n);

    return 0;
}