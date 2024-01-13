#include <bits/stdc++.h>
using namespace std;

void text() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

bool isValid(string s) {
    stack <char> st;

    if (s.length() == 0 || s.length() % 2 != 0) return false;
    else {
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') st.push(s[i]);
            else {
                // cout << st.top() << " " << s[i] << "\n";
                if (st.empty()) return false;
                else if ((st.top() == '(' && s[i] == ')') || (st.top() == '[' && s[i] == ']') || (st.top() == '{' && s[i] == '}')) st.pop();
                else return false;
            }
        }
    }
    if (st.empty()) return true;
    else return false;
}

void solution() {
    string s;
    cin >> s;

    cout << isValid(s);
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