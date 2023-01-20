#include<bits/stdc++.h>
using namespace std;

bool mycomp(int a, int b){
    return a>b;
}

int findKthLargest(vector<int> nums, int k) {
 	sort(nums.begin(),nums.end(),mycomp);
 	
 	return nums[k-1];
}


int main(){
    vector<int> nums = {3,2,3,1,2,4,5,5,6};
    int k = 4;

    cout<<findKthLargest(nums,k)<<endl;
}