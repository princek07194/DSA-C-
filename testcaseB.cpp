#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};

struct Hash {
    size_t operator()(const Point& p) const {
        return ((long long)p.x * 1000003) ^ p.y;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    unordered_map<Point, int, Hash> id;
    vector<vector<int>> adj;
    int idx = 0;

    for (int i = 0; i < N; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        Point p1 = {x1, y1};
        Point p2 = {x2, y2};

        if (!id.count(p1)) {
            id[p1] = idx++;
            adj.push_back({});
        }
        if (!id.count(p2)) {
            id[p2] = idx++;
            adj.push_back({});
        }

        int u = id[p1], v = id[p2];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int V = idx;
    int E = N;

    vector<int> visited(V, 0);
    int C = 0;

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            C++;
            stack<int> st;
            st.push(i);
            visited[i] = 1;
            while (!st.empty()) {
                int u = st.top(); st.pop();
                for (int v : adj[u]) {
                    if (!visited[v]) {
                        visited[v] = 1;
                        st.push(v);
                    }
                }
            }
        }
    }

    int closedShapes = E - V + C;
    cout << closedShapes;
    return 0;
}
