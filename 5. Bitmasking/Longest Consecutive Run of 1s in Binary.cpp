#include<bits/stdc++.h>
using namespace std;

int solve(int n) {
    int ans = INT_MIN;
    while(n!=0){
        int temp = 0;
        if(!(n&1)){
            n = n>>1;
        }
        else{
            while(n>0 and n&1){
                temp++;
                n = n>>1;
            }
        }
        ans = max(ans,temp);
    }
    return ans;
}

int main(){
	int ans = solve(76);

	cout<<ans<<endl;
}