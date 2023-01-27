#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'

const int mod = 1e9 + 7;
const int INF = 1e18 + 5;
const double PI = 3.1415926535;
const double eps = 1e-9;

vector<pair<int,int>> decodeXor(int x){
	vector<pair<int,int>> v;
	if(x&1){
		v.push_back({0,1});
		v.push_back({1,0});
	}
	else{
		v.push_back({0,0});
		v.push_back({1,1});	
	}

	return v;	
}

vector<int> decode(vector<int> encoded){
	bitset<18> f(0);
	int x1,x2,i;
	i = 0;
	x1 = encoded[0];
	x2 = encoded[1];
	int x3 = encoded[0]^encoded[1];
	int first = 0;
	int pow = 1;
	while(x1 or x2 or x3){
		// find all possible values of current bit in the three numbers
		// of all the possible combinations the bits will agree upon one combination only
		// find the values for all the bit positions. If we could find one of numbers then the
		// problem is solved.
		vector<pair<int,int>> ii1 = decodeXor(x1);
		vector<pair<int,int>> i1i2 = decodeXor(x2);
		vector<pair<int,int>> ii2 = decodeXor(x3);
		bool flag = false;
		for(auto p1 : ii1){
			for(auto p2:ii2){
				if(p2.first==p1.first){
					for(auto p3:i1i2){
						if(p2.second==p3.second and p1.second==p3.first){
							first = first + p1.first*pow;
							flag = true;
							break;
						}
					}
				}
				if(flag)
					break;
			}
			if(flag)
				break;
		}

		x1 = x1>>1;
		x2 = x2>>1;
		x3 = x3>>1;
		pow = pow*2;
	}

	vector<int> ans(encoded.size()+1);
	ans[0] = first;
	for(int i=0;i<ans.size();i++){
		ans[i] = encoded[i] xor ans[i-1];
	}

	return ans;

	// to do
}

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> encoded = {3,1};
	vector<int> perm = decode(encoded);

	for(int i : perm)
		cout<<i<<" ";

	return 0;
}