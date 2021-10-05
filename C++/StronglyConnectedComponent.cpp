#include <bits/stdc++.h>
using namespace std;
#define  deb1(x) cerr<<#x<<": "<<x<<" "<<endl
#define ll long long int
#define pb push_back

vector<vector<int> > G;
vector<vector<int> > revG;
vector<int> order;
vector<vector<int> > component(100005);

int comp[100005];// Component Name for Each vertex can be stored in Array too

void dfs(int u, vector<int> &vis)
{
	vis[u] = 1;
	for (auto x : G[u])
	{
		if (!vis[x])
			dfs(x, vis);
	}

	order.pb(u);
}

void dfs_reverse(int u, vector<int> &vis, int col)
{
	vis[u] = 1;
	component[col].pb(u);
	/*comp[u] = col;*/ // when component name for each vertex is stored in array
	for (auto x : revG[u])
		if (!vis[x])
			dfs_reverse(x, vis, col);
}

int main()
{
	int n, m;
	cin >> n >> m;
	G.resize(n + 1);
	revG.resize(n + 1);
	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		G[x].pb(y);
		revG[y].pb(x);
	}
	vector<int> vis;
	vis.assign( n + 1, 0);

	for (int i = 1; i <= n; i++)
	{
		if (!vis[i]) {
			dfs(i, vis);
		}
	}
	vis.assign(n + 1, 0);
	int col = 1;
	vector<int> v;
	for (int i = order.size() - 1; i >= 0; i--)
	{
		if (!vis[order[i]])
		{	v.pb(col);
			dfs_reverse(order[i], vis, col);
			col++;
		}
	}


	for (int i = 0; i < v.size(); i++)
	{
		cout << "Component :" << v[i] << " -> ";
		for (int j = 0; j < component[v[i]].size(); j++)
			cout << component[v[i]][j] << " ";
		cout << endl;
	}
	return 0;
}
