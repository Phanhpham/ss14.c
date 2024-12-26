#include <stdio.h>

int binarySearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)

        {
            return (mid);
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 43, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 43;
    int result = binarySearch(arr, size, target);

    if (result != 1)
    {
        printf("phan tu %d dc tim thay o chi muc %d:", target, result);
    }
    else
    {
        printf("phan tu %d ko co trong mang ", target);
    }
    return 0;
}