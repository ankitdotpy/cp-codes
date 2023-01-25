#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'

const int mod = 1e9 + 7;
const int INF = 1e18 + 5;
const double PI = 3.1415926535;
const double eps = 1e-9;

int uniqueNumber(vector<int> v){
	vector<int> bits(64,0);
	for(int i : v){
		int temp = i;
		int j = 0;
		while(temp){
			bits[j] = bits[j]+(temp&1);
			temp = temp>>1;
			j++;
		} 
	}

	int ans = 0;
	int i = 0;
	for(int b : bits){
		ans = ans + (b%3)*(1<<i);
		i++;
	}

	return ans;
}
	
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v = {5,2,5,2,5,2,3};
	int ans = uniqueNumber(v);
	cout<<ans<<endl;

	return 0;
}