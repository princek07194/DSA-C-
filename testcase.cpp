#include <bits/stdc++.h>
using namespace std;

unordered_map<string, vector<vector<string>>> recipes;
unordered_map<string, int> memo;

int minCost(const string &potion) {
    if (memo.count(potion)) return memo[potion];

    // Base case: if not in recipes, it's a basic item
    if (!recipes.count(potion)) {
        return memo[potion] = 0;
    }

    int best = INT_MAX;

    for (auto &ingredients : recipes[potion]) {
        int cost = (int)ingredients.size() - 1; // combining cost
        for (auto &ing : ingredients) {
            cost += minCost(ing);
        }
        best = min(best, cost);
    }

    memo[potion] = best;
    return best;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);

        int eq = line.find('=');
        string potion = line.substr(0, eq);
        string rhs = line.substr(eq + 1);

        vector<string> ingredients;
        string cur;
        for (char c : rhs) {
            if (c == '+') {
                ingredients.push_back(cur);
                cur.clear();
            } else {
                cur.push_back(c);
            }
        }
        if (!cur.empty()) ingredients.push_back(cur);

        recipes[potion].push_back(ingredients);
    }

    string target;
    getline(cin, target);

    cout << minCost(target);
    return 0;
}
