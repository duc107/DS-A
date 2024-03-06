#include <bits/stdc++.h>
using namespace std;

#define pb push_back

const string NAME = "A";
void text() {
    freopen((NAME + ".in").c_str(), "r", stdin);
    freopen((NAME + ".out").c_str(), "w", stdout);
}

int binarySearch(vector<int> a, int val) {
    int mid, low = 0, high = a.size() - 1;

    while (low <= high) {
        mid = (high + low) / 2;
        if (a[mid] == val) return mid;
        else if (a[mid] < val) low = mid + 1;
        else high = mid - 1;
    }

    return -1;
}

void solution() {
    int n;
    vector<int> a;
    cin >> n;

    while (n--) {
        int x; cin >> x;
        a.push_back(x);
    }
    int val;  cin >> val;
    cout << binarySearch(a, val);
}


void solve() {
    int T = 1;
    // cin >> T;

    for (int tc = 1; tc <= T; ++tc) {
        cout << "Case #" << tc << ": ";
        solution();
        cout << "\n";
    }
        
}

int main() {
    text();
    solve();

    return 0;
}