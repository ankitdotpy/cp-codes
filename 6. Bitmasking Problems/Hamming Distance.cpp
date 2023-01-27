#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'

const int mod = 1e9 + 7;
const int INF = 1e18 + 5;
const double PI = 3.1415926535;
const double eps = 1e-9;

int hammingDist(int a, int b){
	int ans = 0;
	while(a or b){
		if((a&1)==(b&1))
			ans++;
		a = a>>1;
		b = b>>1;
	}

	return ans;
}

int totalHammingDistance(vector<int> nums){
	int ans = 0;
	for(int i=0;i<nums.size();i++){
		for(int j=i+1;j<nums.size();j++){
			ans += hammingDist(nums[i],nums[j]);
		}
	}

	return ans;
}

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> nums = {2,3,5,6,1,8,9,10};
	int ans = totalHammingDistance(nums);
	cout<<ans<<endl;

	return 0;
}