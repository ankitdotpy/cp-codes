//https://www.codechef.com/problems/DIVSUBS
#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'

const int mod = 1e9 + 7;
const int INF = 1e18 + 5;
const double PI = 3.1415926535;
const double eps = 1e-9;

void solve(){
	int n,a,sum=0;
	cin>>n;
	vector<int> csum(n);
	for(int i=0;i<n;i++){
		cin>>a;
		sum = (sum+a%n)%n;
		csum[i] = sum;
	}

	vector<int> ind(n,-1);
	int l,r;
	for(int i=0;i<n;i++){
		if(csum[i]==0){
			l = 0;
			r = i;
			break;
		}
		else if(ind[csum[i]]==-1){
			ind[csum[i]] = i+1;
		}
		else{
			l = ind[csum[i]];
			r = i;
			break;
		}
	}

	cout<<(r-l+1)<<endl;
	for(int i=l;i<=r;i++){
		cout<<i+1<<" ";
	}
	cout<<endl;
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