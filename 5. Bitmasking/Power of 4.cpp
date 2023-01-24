#include<bits/stdc++.h>
using namespace std;

bool isPowerOfFour(int n){
	// to be a power of 4 it gotta be a even power of 2
	if(n==0)
		return false;

	float l = log(n)/log(4);
	return floor(l)==ceil(l);
}

bool isPowerOfFourAlt(int n){
	if(n<4){
		// cout<<"first";
		return false;
	}

	if((n&(n-1))==0){
		int p = 0;
		while(n&1==0){
			n = n>>1;
			p++;
		}
		// cout<<"second";
		return p%2==0;
	}
	// cout<<"third";
	return false;
}

int main(){
	cout<<isPowerOfFour(25)<<endl;
	cout<<isPowerOfFour(64)<<endl;
	cout<<isPowerOfFourAlt(25)<<endl;
	cout<<isPowerOfFourAlt(64)<<endl;
}