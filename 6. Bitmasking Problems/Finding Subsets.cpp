#include<bits/stdc++.h>
using namespace std;

void allSubsets(string s){
	int n = s.length();
	for(int i=0;i<(1<<n);i++){
		string sub = "";
		int temp = i;
		int j = 0;
		while(temp){
			if(temp&1)
				sub = sub+s[j];
			temp = temp>>1;
			j++;
		}
		// reverse(sub.begin(), sub.end());
		cout<<sub<<endl;
	}
}

int main(){
	string s = "abcd";
	allSubsets(s);
}