#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n < 2)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    cout << fibo(4);
    return 0;
}
// 0, 1, 1, 2, 3, 5, 8, 13, ....
