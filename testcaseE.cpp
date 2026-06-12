#include <bits/stdc++.h>
using namespace std;

struct Line {
    int x1, y1, x2, y2;
};

// check if point (px, py) lies on line segment
bool onSegment(int x1, int y1, int x2, int y2, int px, int py) {
    return px >= min(x1, x2) && px <= max(x1, x2) &&
           py >= min(y1, y2) && py <= max(y1, y2);
}

// check intersection of two lines (only vertical, horizontal, 45-degree diagonal allowed)
bool intersect(Line a, Line b, pair<int,int>& inter) {
    // brute-force since constraints are small
    for (int x = 0; x <= 100; x++) {
        for (int y = 0; y <= 100; y++) {
            if (onSegment(a.x1,a.y1,a.x2,a.y2,x,y) &&
                onSegment(b.x1,b.y1,b.x2,b.y2,x,y)) {
                inter = {x,y};
                return true;
            }
        }
    }
    return false;
}

// distance in terms of cells touched
int cellDistance(Line l, int px, int py) {
    // length in cells from point to one endpoint
    int d1 = max(abs(px - l.x1), abs(py - l.y1));
    int d2 = max(abs(px - l.x2), abs(py - l.y2));
    if ((px == l.x1 && py == l.y1) || (px == l.x2 && py == l.y2)) {
        // star at endpoint -> take distance to other side
        return max(d1, d2);
    } else {
        // star inside -> take min of both sides
        return min(d1, d2);
    }
}

int main() {
    int N; cin >> N;
    vector<Line> lines(N);
    for (int i = 0; i < N; i++)
        cin >> lines[i].x1 >> lines[i].y1 >> lines[i].x2 >> lines[i].y2;

    int K; cin >> K;

    map<pair<int,int>, vector<int>> stars; // star point -> list of contributing line indices

    // find all intersection points
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            pair<int,int> inter;
            if (intersect(lines[i], lines[j], inter)) {
                // check how many lines pass through this point
                vector<int> contributing;
                for (int k = 0; k < N; k++) {
                    if (onSegment(lines[k].x1, lines[k].y1, lines[k].x2, lines[k].y2, inter.first, inter.second)) {
                        contributing.push_back(k);
                    }
                }
                if ((int)contributing.size() == K) {
                    stars[inter] = contributing;
                }
            }
        }
    }

    int totalIntensity = 0;
    for (auto &st : stars) {
        auto pt = st.first;
        auto &contrib = st.second;
        int intensity = INT_MAX;
        for (int idx : contrib) {
            intensity = min(intensity, cellDistance(lines[idx], pt.first, pt.second));
        }
        totalIntensity += intensity;
    }

    cout << totalIntensity << endl;
    return 0;
}
