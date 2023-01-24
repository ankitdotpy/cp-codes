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

int updateIthBit(int num, int i){
	int mask = 1<<i;
	if(num&mask)
		return clearIthBit(num,i);
	return setIthBit(num,i);

}

int clearLastIBits(int num, int i){
	int mask = (~0)<<i; //(11111...)<<i
	return num&mask;
}

int clearRangeOfBits(int num, int i, int j){
	//mask? //11111...000000...11111
	int a = (~0)<<(j+1);
	int b = (1<<i)-1;
	int mask = a|b;

	return num&mask;

}

int replaceBits(int n, int m, int i, int j){
	int temp = clearRangeOfBits(n,i,j);
	int mask = m<<i;
	// bitset<16> mb(mask);
	// cout<<mb<<endl;
	return temp|mask;
}

bool isPowerOfTwo(int num){
	return (num&(num-1))==0;
}

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	cout<<getIthBit(43,3)<<endl;
	cout<<clearIthBit(43,3)<<endl; // 43 = 101011
	cout<<setIthBit(43,2)<<endl;
	cout<<updateIthBit(43,4)<<endl;
	cout<<clearLastIBits(43,3)<<endl;
	cout<<clearRangeOfBits(43,1,4)<<endl;
	cout<<replaceBits(43,10,1,4)<<endl;

	// bitset<16> x(43);
	// bitset<16> y(53);
	// cout<<x<<endl;
	// cout<<y<<endl;
	return 0;
}