#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;
vector<int> adj[MAXN];
bool visited[MAXN];

// DFS rekursif
void dfs(int node) {
    visited[node] = true;
    cout << node << " ";

    for (int next : adj[node]) {
        if (!visited[next]) {
            dfs(next);
        }
    }
}

int main() {
    int n, m; 
    cout << "Masukkan jumlah node dan edge: ";
    cin >> n >> m;

    cout << "Masukkan edge (u v):\n";
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // graph tidak berarah
    }

    int start;
    cout << "Mulai DFS dari node: ";
    cin >> start;

    cout << "Hasil DFS: ";
    dfs(start);
    cout << "\n";

    return 0;
}
