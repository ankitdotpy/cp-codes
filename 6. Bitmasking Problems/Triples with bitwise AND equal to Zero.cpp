#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'

const int mod = 1e9 + 7;
const int INF = 1e18 + 5;
const double PI = 3.1415926535;
const double eps = 1e-9;

int countTriplets(vector<int> nums){
	int n = nums.size();
	map<int, int> cnt;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int a = nums[i]&nums[j];
			cnt[a]++;
		}
	}

	int ans = 0;

	for(int i=0;i<n;i++){
		for(auto p : cnt){
			if((p.first&nums[i])==0){
				ans+=p.second;
			}
		}
	}

	return ans;
} 

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> nums = {2,1,3};
	int ans = countTriplets(nums);
	cout<<ans<<endl;
	
	return 0;
}