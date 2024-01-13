#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int val, vector<int> a) {
    int low = 0, high = a.size() - 1, mid;

    while (low <= high) {
        mid = (high + low) / 2;
        if (a[mid] == val) return true;
        else if (a[mid] < val) low = mid + 1;
        else high = mid - 1;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    // i/o from file
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector <int> a;
    int n, val;
    cin >> n >> val;
    
    while (n--) {
        int x; cin >> x;
        a.push_back(x);
    }

    cout << binarySearch(val, a);
    
    return 0;
}
