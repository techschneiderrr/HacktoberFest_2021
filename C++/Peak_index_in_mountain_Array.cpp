#include <bits/stdc++.h>
using namespace std;

// A binary search based function
// that returns index of a peak element
int Find_Peak(int arr[], int n)
{
    int start = 0, end = arr[n-1], mid;
    while (start <= end)
    {
        // Find index of middle element
        // (start + end)/2
        mid = (start + end) / 2;
        // Compare middle element with its right neighbours
        // right neighbour is less than it,
        // then left half must have a peak element
        if (arr[mid] > arr[mid + 1])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
            mid = mid + 1;
        }
    }
    return mid;
}

int main()
{
    int arr[] = {24, 69, 100, 99, 79, 78, 67, 36, 26, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Index of a peak point is "
         << Find_Peak(arr, n);
    return 0;
}
