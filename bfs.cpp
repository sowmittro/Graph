#include <bits/stdc++.h>
using namespace std;

void bfs(int start, vector<int> graph[], int n) {
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        cout << current << " ";

        for (int i = 0; i < graph[current].size(); i++) {
            int X = graph[current][i];
            if (!visited[X]) {
                visited[X] = true;
                q.push(X);
            }
        }
    }
    cout << endl;
}

int main() {
    int n, e;
    cin >> n >> e;

    vector<int> graph[n];
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int start;
    cin >> start;

    bfs(start, graph, n);
    return 0;
}