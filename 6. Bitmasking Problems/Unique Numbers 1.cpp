#include<bits/stdc++.h>
using namespace std;

int uniqueNumber(vector<int> v){
	int ans = 0;
	for(int i:v){
		ans = ans ^ i;
	}

	return ans;
}

int main(){
	vector<int> v = {1,1,2,2,3,3,4,4,5,5,6};
	int ans = uniqueNumber(v);
	cout<<ans<<endl;

	return 0;
}