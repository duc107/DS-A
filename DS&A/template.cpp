#include <bits/stdc++.h>
using namespace std;

const string NAME = "A";
void text() {
    freopen((NAME + ".in").c_str(), "r", stdin);
    freopen((NAME + ".out").c_str(), "w", stdout);
}

void solution() {
    
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];

    std::vector<int> L(n, 1);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (a[i] > a[j]) {
                L[i] = max(L[i], L[j] + 1);
            }
        }
    }
    
    cout << *max_element(L.begin(), L.end());
    
    return 0;
}