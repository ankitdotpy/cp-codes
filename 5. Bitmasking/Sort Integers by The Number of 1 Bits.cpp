#include<bits/stdc++.h>
using namespace std;

int setBits(int a){
	int cnt = 0;
	while(a){
		cnt = cnt + (a&1);
		a = a>>1;
	}

	return cnt;
}

bool comp(int a, int b){
	int cnt1 = setBits(a);
	int cnt2 = setBits(b);

	if(cnt1==cnt2)
		return a<b;

	return cnt1<cnt2;
}

vector<int> sortByBits(vector<int> arr){
	sort(arr.begin(), arr.end(),comp);
	return arr;
}

int main(){
	vector<int> arr = {0,1,2,3,4,5,6,7,8};
	vector<int> sorted = sortByBits(arr);
	for(int i:sorted)
		cout<<i<<" ";

	return 0;
}