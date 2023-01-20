#include<bits/stdc++.h>
using namespace std;

int distributeCandies(vector<int> candies) {
   map<int,bool> m;
   vector<int> v;
   int n = candies.size();
   for(int i=0;i<n;i++){
       if(!m[candies[i]]){
           m[candies[i]] = true;
           v.push_back(candies[i]);
       }
   }
   int c = v.size();
   return min(c,n/2);
}

int main(){
    vector<int> candies = {1,1,2,2,3,3};

    int ans = distributeCandies(candies);

    cout<<ans<<endl;
}