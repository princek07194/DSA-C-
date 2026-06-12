#include <bits/stdc++.h>
using namespace std;

struct State {
    int r, c, d;
};

int M, N;
vector<vector<char>> grid;

// Directions: 0=up, 1=right, 2=down, 3=left
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};

int reflect(char mirror, int dir) {
    if (mirror == '/') {
        if (dir == 0) return 1; // up -> right
        if (dir == 1) return 0; // right -> up
        if (dir == 2) return 3; // down -> left
        if (dir == 3) return 2; // left -> down
    } else if (mirror == '\\') {
        if (dir == 0) return 3; // up -> left
        if (dir == 3) return 0; // left -> up
        if (dir == 2) return 1; // down -> right
        if (dir == 1) return 2; // right -> down
    }
    return dir; // empty cell: no change
}

int simulate(int sr, int sc, int sd) {
    set<pair<int,int>> visitedCells;
    map<tuple<int,int,int>, int> seen;

    int r = sr, c = sc, d = sd, steps = 0;

    while (true) {
        if (r < 0 || r >= M || c < 0 || c >= N) return 0; // left grid
        auto key = make_tuple(r, c, d);
        if (seen.count(key)) {
            // cycle found
            int cycleLen = steps - seen[key];
            return cycleLen;
        }
        seen[key] = steps;
        visitedCells.insert({r, c});

        char mirror = grid[r][c];
        d = reflect(mirror, d);
        r += dr[d];
        c += dc[d];
        steps++;
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> M >> N;
    grid.assign(M, vector<char>(N));
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] == '/' || grid[i][j] == '\\') {
                for (int d = 0; d < 4; d++) {
                    ans = max(ans, simulate(i, j, d));
                }
            }
        }
    }

    cout << ans;
    return 0;
}
