#include <stdio.h>

int findPeek(int arr[], int low, int high, int len)
{
    int mid = low + (high - low) / 2;
    // For checking the corner cases (1) only one element in the array (2) two elements in which the second one is the highest (3) the normal check -low- high -low-)
    if ((mid == 0 || arr[mid] >= arr[mid - 1]) && (mid = len - 1 || arr[mid] >= arr[mid + 1])){
        printf("im here %d",mid);
        return mid;
    }
    else if (mid > 0 && arr[mid - 1] > arr[mid])
        return findPeek(arr, low, (mid - 1), len);
    else
        return findPeek(arr, (mid + 1), high, len);
}
int main()
{
    int len, i;
    printf("Enter the number of items in the array:");
    scanf("%d", &len);
    int arr[len];
    for (i = 0; i < len; i++)
    {
        printf("Enter the element %d:", (i + 1));
        scanf("%d", &arr[i]);
    }
    printf("The Peak Element's index is: %d", findPeek(arr, 0, len - 1, len));

    return 0;
}