#include<bits/stdc++.h>
using namespace std;
int _x;

bool comp(int a, int b){
    return abs(a-_x)<abs(b-_x);
}
vector<int> findClosestElements(vector<int> arr, int k, int x) {
        _x = x;
        sort(arr.begin(),arr.end(),comp);
        vector<int> ans(arr.begin(),arr.begin()+k);
        sort(ans.begin(),ans.end());
        return ans;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int k = 4;
    int x = 3;

    vector<int> ans = findClosestElements(arr,k,x);
}