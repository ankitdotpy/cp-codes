/*
we are given a list of n numbers and a number x, and we want to find out if it 
is possible to choose some numbers from the list so that their sum is x. 
For example, given the list [2,4,5,9] and x = 15, we can choose the numbers [2,4,9]
to get 2+4+9 = 15. However, if x = 10 for the same list, it is not possible to form the sum.(CPH)
*/

#include<bits/stdc++.h>

#define pass (void)0

using namespace std;

vector<int> subsetSum(vector<int> v){
    pass;
} 

int main(){
    vector<int> nums = {2,4,5,9};
    int x = 15;
    int n = nums.size();
    auto bg = nums.begin();

    vector<int> left(bg,bg+n/2);
    vector<int> right(bg+n/2,nums.end());

    vector<int> leftSum = subsetSum(left);
    vector<int> rightSum = subsetSum(right);

    int ans = 0;
    for(int i=0;i<leftSum.size();i++){
        int req = x - leftSum[i];
        int cnt = upper_bound(rightSum.begin(),rightSum.end(),req) - lower_bound(rightSum.begin(),rightSum.end(),req);
        ans = ans + cnt;
    }

    cout<<ans<<endl;

}