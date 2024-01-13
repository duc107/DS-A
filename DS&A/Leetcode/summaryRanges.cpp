#include <bits/stdc++.h>
using namespace std;

void text()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

vector<string> summaryRanges(vector<int> &nums) {
    vector<string> result;

    int n = nums.size();

    if (n == 0) return result;

    int a = nums[0];

    for (int i = 0; i < n; i++) {
        if (i == n - 1 || nums[i] + 1 != nums[i + 1]) {
            if (nums[i] != a) {
                result.push_back(to_string(a) + "->" + to_string(nums[i]));
            }
            else {
                result.push_back(to_string(a));
            }
            if (i != n - 1) a = nums[i + 1];
        }
    }
    return result;
}

void solution()
{
    int n;
    cin >> n;
    vector<int> nums;
    vector<int> res;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    for (auto s : summaryRanges(nums))
    {
        cout << s << " ";
    }
}

void solve()
{
    int T = 1;
    cin >> T;

    for (int tc = 1; tc <= T; ++tc)
    {
        cout << "Case #" << tc << ": ";
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