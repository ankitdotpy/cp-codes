#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'

const int mod = 1e9 + 7;
const int INF = 1e18 + 5;
const double PI = 3.1415926535;
const double eps = 1e-9;

int multiply(int a, int b, int c){
	int res = 0;
	while(b){
		if(b&1)
			res = res+a, res = res%c;
		a+=a, a%=c;
		b = b>>1;
	}

	return res;
}

void solve(){
	int a,b,c;
	cin>>a>>b>>c;

	int ans = multiply(a,b,c);
	cout<<ans<<endl;
}

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		solve();
	}

	return 0;
}