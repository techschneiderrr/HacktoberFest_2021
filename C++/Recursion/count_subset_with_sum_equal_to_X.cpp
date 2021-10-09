#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int subset_sum(int arr[], int size, int sum)
{
    // The recursion is stopped at 0th-th level
    if (size == 0)
    {
        if (sum == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    // Recursively calling the function for two cases
    // Either the element is included in the subset
    // or the element is not included
    return subset_sum(arr, size - 1, sum - arr[size - 1]) + subset_sum(arr, size - 1, sum);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 10;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << subset_sum(arr, size, sum);
    return 0;
}
