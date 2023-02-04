#include<bits/stdc++.h>
using namespace std;

pair<int,int> uniqueNumbers(vector<int> v){
	int x = 0;
	for(int i:v){
		x = x^i;
	}

	int pos = 0;
	int temp = x;
	while((temp&1)==0){
		temp = temp>>1;
		pos++;
	}
	int num1 = 0;
	for(int i:v){
		if((i>>pos)&1){
			num1 = num1^i;
		}
	}

	int num2 = x^num1;

	return {num1,num2};
}

int main(){
	vector<int> v = {1,1,2,2,3,3,4,4,5,6};
	auto p = uniqueNumbers(v);
	cout<<p.first<<" "<<p.second<<endl;
}