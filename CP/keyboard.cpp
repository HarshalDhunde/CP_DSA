#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin>>c;
    string s;
    cin>>s;
    string ans;
    string v="qwertyuiopasdfghjkl;zxcvbnm,./";
    for(int i=0;i<s.size();i++){
        int index=v.find(s[i]);
        if(c=='R'){
            ans+=v[index-1];
        }
        else{
            ans+=v[index+1];
        }
    }
    cout<<ans<<endl;
}