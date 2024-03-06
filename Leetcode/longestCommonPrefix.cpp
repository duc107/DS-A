#include <bits/stdc++.h>
using namespace std;

void text() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

string longestCommonPrefix(vector<string>& strs) {
    
}

void solution() {
    vector <string> s;
    int n; cin >> n;

    while (n--) {
        string t; cin >> t;
        s.push_back(t);
    }

    cout << longestCommonPrefix(s);
}

void solve() {
    int T = 1;
    cin >> T;

    for (int tc = 1; tc <= T; ++tc) {
        cout << "Case #" << tc << ": ";
        solution();
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    text();
    solve();

    return 0;
}