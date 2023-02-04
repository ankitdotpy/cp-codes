#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'

const int mod = 1e9 + 7;
const int INF = 1e18 + 5;
const double PI = 3.1415926535;
const double eps = 1e-9;

int solve(int L, int R){
    int n = (R-L+1);
    if(n>L)
        return -1;
    
    return R;
}

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int l,r;
	cin>>l>>r;
	int res = solve(l,r);
	cout<<res<<endl;
	if(res!=-1){
		for(int i=l;i<=r;i++){
			cout<<(res%i)<<" ";
		}
	}

	return 0;
}