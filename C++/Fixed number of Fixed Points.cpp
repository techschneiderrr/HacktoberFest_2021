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
        ui n, k;
        cin >> n >> k; 
        ui A[n];
        if((n-k) == 1) 
            cout << "-1\n"; 
        else if(n == k) {
            for(int i = 1; i <= n; i++)
                cout << i << " ";
        	cout << "\n";
		}
        else {
            for(ui i = 0; i < k; i++) 
                A[i] = (i + 1); 
            for(ui i = k; i < (n-1); i++) 
                A[i] = (i + 2);
            ui x = n - 1, y = k + 1; 
            A[x] = y;
            for(ui i = 0; i < n; i++) 
                cout << A [i] << " ";
            cout << "\n";
        }
    }
	return 0;
}
