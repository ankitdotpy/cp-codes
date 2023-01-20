#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
    map<char,int> cnt;
    for(int i=0;i<s.length();i++){
        cnt[s[i]]++;
    }
    
    for(int i=0;i<s.length();i++){
        if(cnt[s[i]]==1)
            return i;
    }
    
    return -1;
}

int main(){
    string s;
    cin>>s;
    
    int ans = firstUniqChar(s);

    cout<<ans<<endl;
}

