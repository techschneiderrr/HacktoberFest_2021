#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int target;
    cin >> target;
    int lb = 0, ub = n - 1, m;
    while (ub >= lb)
    {
        m = lb + (ub - lb) / 2;
        if (arr[m] > target)
            ub = m - 1;
        else if (arr[m] < target)
            lb = m + 1;
        else
        {
            cout << arr[m] << endl;
            break;
        }
    }
    if (ub < lb)
        cout << arr[ub] << endl;
    return 0;
}
