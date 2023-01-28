#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'

const int mod = 1e9 + 7;
const int INF = 1e18 + 5;
const double PI = 3.1415926535;
const double eps = 1e-9;

vector<int> decode(vector<int> encoded){
	int a = 0;
	int n = encoded.size();
	
	for(int i=1;i<=n+1;i++)
		a = a^i;

	for(int i=1;i<n;i+=2)
		a = a^encoded[i];

	vector<int> ans(n+1);
	ans[0] = a;
	for(int i=1;i<ans.size();i++){
		ans[i] = ans[i-1]^encoded[i-1];
	}

	return ans;
}

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> encoded = {6,5,4,6};
	vector<int> decoded = decode(encoded);

	for(auto i:decoded)
		cout<<i<<" ";
	cout<<endl;

	return 0;
}