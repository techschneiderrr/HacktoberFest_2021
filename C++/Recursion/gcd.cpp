#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define pb push_back
#define all(v) v.begin(), v.end()
const int mod = 1e9 + 7;

int GCD(int x, int y) {
  
    if (x == 0)
        return y;
    return GCD(y % x, x);
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    cout << GCD(a, b) << "\n";
    return 0;
}
