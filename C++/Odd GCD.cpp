#include <bits/stdc++.h>
typedef unsigned int ui;
typedef long long int ll;
typedef unsigned long long int ul;

using namespace std;

int main() {
	// your code goes here
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    ui T;
    cin >> T; 
    while(T--) {
        ll n;
        cin >> n;
        ll arr[n];
        ll odd = 0; 
        ll even = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        
        if(even == n) {
            ll res = 1e9;
            for(int i = 0; i < n; i++) {
                ll ans = 0;
                while(arr[i] % 2 != 1) {
                    arr[i] /= 2;
                    ans++;
                }
                
                if(ans < res)
                    res = ans;
            }
            cout << res << "\n";
            }
        else
            cout << "0\n";
    }
	return 0;
}
