#include <bits/stdc++.h>
using namespace std;

void text()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int removeDuplicates(vector<int>& nums) {
    int ans = 0;
    int n = nums.size();
    
    for (int i = 0; i < n + 1; ++i) {
        if (nums[i] != nums[i + 1]) {
            ++ans;
        }
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (nums[i] == nums[j]) {
                for (int k = j; k < n - 1; ++k) {
                    nums[k] = nums[k + 1];
                }
                
            
            }
        
        }
    }
    for (auto i : nums) cout << i << " ";
    cout << "\n" << ans << "\n";
    return ans;
}

void solution()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    removeDuplicates(nums);
}

void solve()
{
    int T = 1;
    cin >> T;

    for (int tc = 1; tc <= T; ++tc)
    {
        cout << "Case #" << tc << ": \n";
        solution();
        cout << "\n";
    }
}

int main()
{
    text();
    solve();

    return 0;
}