#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'

const int mod = 1e9 + 7;
const int INF = 1e18 + 5;
const double PI = 3.1415926535;
const double eps = 1e-9;

int sum(int a){
	int ans = 0;
	while(a){
		ans = ans+(a%10);
		a = a/10;
	}

	return (ans>9?sum(ans):ans);
}

int solve(int a, int n){
	if(n==1){
		return sum(a);
	}

	return solve(sum(a*a),n-1);
}

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		int a,n;
		cin>>a>>n;

		int ans = solve(a,n);

		cout<<ans<<endl;
	}

	return 0;
}