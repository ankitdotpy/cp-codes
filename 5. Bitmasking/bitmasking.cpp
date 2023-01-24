#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'

const int mod = 1e9 + 7;
const int INF = 1e18 + 5;
const double PI = 3.1415926535;
const double eps = 1e-9;

int getIthBit(int num, int i){
	int mask = 1<<i;
	return (num&mask)?1:0;
}

int clearIthBit(int num, int i){
	int mask = ~(1<<i);
	return num&mask;
}

int setIthBit(int num, int i){
	int mask = (1<<i);
	return num|mask;
}

int updateIthBit(int num, int i, int upd){
	
}

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	cout<<getIthBit(43,3)<<endl;
	cout<<clearIthBit(43,3)<<endl; // 43 = 101011
	cout<<setIthBit(43,2)<<endl;

	return 0;
}