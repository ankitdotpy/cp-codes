#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'

const int mod = 1e9 + 7;
const int INF = 1e18 + 5;
const double PI = 3.1415926535;
const double eps = 1e-9;

int power(int a, int b){
	int res = 1;
	while(b){
		if(b&1)
			res = res*a;
		a = a*a;
		b = b>>1;
	}

	return res;
}

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	cout<<power(2,13)<<endl;

	return 0;
}