#include <bits/stdc++.h>
using namespace std;

// Store 3x3 patterns for digits/operators
map<char, vector<string>> patterns;

void initPatterns() {
    patterns['0'] = {" _ ",
                     "| |",
                     "|_|"};
    patterns['1'] = {"   ",
                     "  |",
                     "  |"};
    // ... fill for 2-9, +, -, *, %, =
}

// Compare two 3x3 chars: count LED differences
int diff(vector<string>& a, vector<string>& b) {
    int d = 0;
    for (int i=0;i<3;i++)
        for (int j=0;j<3;j++)
            if (a[i][j] != b[i][j]) d++;
    return d;
}

int main() {
    int N; cin >> N;
    cin.ignore();
    initPatterns();

    // Read 3 rows
    vector<string> grid(3);
    for (int i=0;i<3;i++) getline(cin, grid[i]);

    // Extract each character as 3x3 block
    vector<vector<string>> chars(N, vector<string>(3));
    for (int i=0;i<3;i++) {
        for (int c=0;c<N;c++) {
            chars[c][i] = grid[i].substr(c*3, 3);
        }
    }

    // TODO:
    // 1. Decode equation
    // 2. For each char, check if toggling to another makes equation correct
    // 3. Print faulty position

    return 0;
}
