#include <bits/stdc++.h>
using namespace std;

void move(int n,char A,char B,char C)
 {
      if(n==1){
        cout<<A<<" ==> "<<C<<"\n";// nếu n = 1 thì dịch chuyển từ A -> C
      }
      else {        
        // Nếu n > 1 thì thực hiện lần lượt các bước
        move(n - 1, A, C, B); // 1. Dịch chuyển n-1 đĩa từ A -> B
        cout<<A<<" ==> "<<C<<"\n"; // 2. Dịch chuyển đĩa thứ n từ A -> C
        move(n - 1, B, A, C); // 3. Dịch chuyển n-1 đĩa từ B -> C
      }
 }

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    move(n, '1', '2', '3');
    // vector<int> a;

    // while (n--) {
    //     int x; cin >> x;
    //     a.push_back(x);
    // }

    // for (auto i : a) cout << i << " ";
    
    
    return 0;
}
