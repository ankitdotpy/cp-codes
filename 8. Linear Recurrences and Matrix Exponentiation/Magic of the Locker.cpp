#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'

const int mod = 1e9 + 7;
const int INF = 1e18 + 5;
const double PI = 3.1415926535;
const double eps = 1e-9;

void solve(){
	int n;
	cin>>n;
	int x = (1+sqrt(1ll+n*4))/2;

	int tot = (x*(x+1))/2;
	int rem = n-tot;
	int ans = (rem+1)%mod;
	for(int i=1;i<=x;i++){
		ans = (ans%mod * i%mod)%mod;
	}

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