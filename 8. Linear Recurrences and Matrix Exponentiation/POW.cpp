#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'

const int mod = 1e9 + 7;
const int INF = 1e18 + 5;
const double PI = 3.1415926535;
const double eps = 1e-9;

string solve(int a, int b, int c){
	if(abs(a)==abs(b)){
		if(c&1){
			return (a>b)?">":"<";
		}
		else{
			return "=";
		}
	}

	if(c&1){
		return (a>b)?">":"<";
	}
	else{
		return (abs(a)>abs(b))?">":"<";
	}
}

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	string ans = solve(5,-10,2);
	cout<<ans<<endl;

	return 0;
}