#include<bits/stdc++.h>
using namespace std;

int maximumScore(int a, int b, int c){
	int x = min(a,min(b,c));
	int z = max(a,max(b,c));
	int y = (a+b+c)-(x+z);

	if(z>=x+y)
		return x+y;

	return (x+y+z)/2;
}

int main(){
	int a,b,c;
	cin>>a>>b>>c;

	int ans = maximumScore(a,b,c);
	cout<<ans<<endl;
}