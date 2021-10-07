#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

// for 1 based indexing

map<pair<int, int> , int > mpx;
vector<int> bellman_ford(vector<vector<int> > adj, int src, int n)
{
	vector<int> dist(n + 1, INT_MAX);
	dist[src] = 0;
	for (int i = 0; i < n - 1; i++) // Relaxation n-1 times.
	{
		for (auto it = mpx.begin(); it != mpx.end(); it++)
		{
			int from = it->first.first, to = it->first.second;
			int weight = mpx[ {from, to}];
			if (dist[from] != INT_MAX && (dist[to] > dist[from] + weight)) // 1st condition to check overflow
				dist[to] = dist[from] + weight;
		}

	}
	// Check for negative cycle;
	for (auto it = mpx.begin(); it != mpx.end(); it++)
	{
		int from = it->first.first, to = it->first.second;
		int weight = mpx[ {from, to}];
		if (dist[to] > dist[from] + weight)
		{
			cout << "Negative Cycle Present" << endl;
			exit(0);
		}
	}
	return dist;
}

int main()
{
	int n, m, src;
	cin >> n >> m;
	vector<vector<int> > adj(n + 1);
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		mpx[ {a, b}] = c;
		adj[a].pb(b);
	}
	//cout << "Enter Source: " << endl;
	src = 0;
	vector<int> res = bellman_ford(adj, src, n);
	for (int i = 0; i < res.size(); i++)
		cout << res[i] << " ";

}
