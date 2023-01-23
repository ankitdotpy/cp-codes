#include<bits/stdc++.h>
using namespace std;

string getHint(string secret, string guess){
	map<char, int> sc,gc;
	for(int i=0;i<secret.length();i++){
		sc[secret[i]]++;
		gc[guess[i]]++;
	}
	int cows = 0;
	for(auto p : gc){
		char key = p.first;
		int cnt = p.second;
		cows += min(sc[key],gc[key]);
	}
	int bulls = 0;
	for(int i=0;i<guess.length();i++){
		if(secret[i]==guess[i]){
			cows--;
			bulls++;
		}
	}

	string ans = to_string(bulls)+'A'+to_string(cows)+'B';

	return ans;
}

int main(){
	string secret,guess;
	cin>>secret>>guess;

	stirng ans = getHint(secret,guess);
	cout<<ans<<endl;
}