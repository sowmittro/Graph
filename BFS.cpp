#include <bits/stdc++.h>
using namespace std;

void bfs(int n, int e) {
    vector<vector<int>> graph(n, vector<int>(n, 0));
    vector<bool> visit(n, false);
    
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    int st;
    cin >> st;
    
    queue<int> q;
    q.push(st);
    visit[st] = true;

    while (!q.empty()) {
        int X = q.front();
        q.pop();
        cout << X << " ";

        for (int i = 0; i < n; i++) {
            if (graph[X][i] == 1 && !visit[i]) {
                visit[i] = true;
                q.push(i);
            }
        }
    }
    cout << endl;
}

int main() {
    int n, e;
    cin >> n >> e;

    bfs(n, e);
    return 0;
}