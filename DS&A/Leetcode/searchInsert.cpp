#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1, mid;

    while (low <= high) {
        mid = (high + low) / 2;
        if (nums[mid] > target) high = mid - 1;
        else if (nums[mid] < target) low = mid + 1;
        else return mid;
    }
    return low;
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

    cout << searchInsert(a, val);
    
    return 0;
}
