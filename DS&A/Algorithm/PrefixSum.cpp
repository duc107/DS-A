#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, q; 
    cin >> n >> q;

    int a[n];
    int prefix[n] = {0};

    for (int &x : a) cin >> x;
    
    for (int i = 1; i <= n; ++i) prefix[i] = prefix[i - 1] + a[i - 1];

    while (q--) {
        int l, r;
        cin >> l >> r;

        cout << prefix[r] - prefix[l - 1] << "\n";
    }
    

    return 0;
}