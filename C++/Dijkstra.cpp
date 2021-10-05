#include<bits/stdc++.h>
using namespace std;
map<int, int> parent;

int main() {
    int v, e, s;
    cout << "Enter number of vertices,number of edges and source vertex: " << endl;
    cin >> v >> e >> s;
    vector<vector<int> > adj(v);
    map<pair<int, int>, int> mp;
    for (int i = 0; i < e; i++) {
        int x, y, w;
        cin >> x >> y >> w;
        adj[x].push_back(y);
        adj[y].push_back(x);
        pair<int, int> p1 = make_pair(x, y);
        pair<int, int> p2 = make_pair(y, x);
        mp[p1] = w;
        mp[p2] = w;
    }
    set<pair<int, int> > st;
    vector<int> dis(v, INT_MAX);
    for (int i = 0; i < v; i++)
        parent[i] = -1;
    dis[s] = 0;
    st.insert(make_pair(s, 0));
    while (!st.empty()) {
        pair<int, int> p = *st.begin();
        st.erase(st.begin());
        int node = p.first;
        int wt = p.second;
        for (int i = 0; i < adj[node].size(); i++) {
            int nbs = adj[node][i];
            if (dis[nbs] > dis[node] + mp[make_pair(node, nbs)]) {
                parent[node] = nbs;
                dis[nbs] = dis[node] + mp[make_pair(node, nbs)];
                st.insert(make_pair(nbs, dis[nbs]));
            }
        }
    }
    // TO print shortest path for each vertex use Parent Hash Map until parent[i]=-1
    for (int i = 0; i < v; i++) cout << dis[i] << " ";
}
