#include <iostream>
#include <map>
using namespace std;

const int N = 1e6;

int a[N];

int main(){
	int n;
	cin >> n;
	map<int, int> cnt;
	for(int i = 0; i < n;i++){
		cin >> a[i];
	}
	
	for(int i = 0; i < n;i++){
		cnt[a[i]]++;
	}
	for(auto it : cnt){
		cout << "Gia tri " << it.first << " xuat hien " << it.second << " lan!\n";
	}
}