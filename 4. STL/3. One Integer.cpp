#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> nums) {
    priority_queue<int,vector<int>,greater<int>> h;
    int ans = 0;
    for(int i=0;i<nums.size();i++){
        h.push(nums[i]);
    }
    
    while(h.size()>1){
        int a = h.top();
        h.pop();
        int b = h.top();
        h.pop();

        int s = a+b;
        ans = ans + s;
        h.push(s);
    }

    // while(!h.empty()){
    //     cout<<h.top()<<endl;
    //     h.pop();
    // }
    // cout<<ans<<endl;
    return ans;
}

int main(){
    vector<int> nums = {1,2,3,4,5};

    cout<<solve(nums)<<endl;
}