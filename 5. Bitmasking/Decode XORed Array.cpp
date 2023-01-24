#include<bits/stdc++.h>
using namespace std;

vector<int> decode(vector<int> encoded, int first){
	int n = encoded.size();
	vector<int> hidden(n+1);
	hidden[0] = first;

	for(int i=0;i<n;i++){
		hidden[i+1] = hidden[i]^encoded[i];
	}

	return hidden;
}

int main(){
	vector<int> encoded = {1,2,3};
	int first = 1;

	vector<int> decoded = decode(encoded,first);

	for(int i:decoded){
		cout<<i<<" ";
	}
}