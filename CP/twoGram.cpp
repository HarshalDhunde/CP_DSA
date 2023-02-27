#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0,j=1;
    unordered_map<string,int> um;
    while(j<s.size()){
        string s1="";
        // cout<<"si:"<<s[i]<<" "<<"sj:"<<s[j]<<endl;
        s1=s1+s[i]+s[j];
        // cout<<s1<<endl;
        um[s1]+=1;
        i++;
        j++;
    }
    string ans="";
    int maxcount=-1;
    for(auto x:um){
        if(maxcount<x.second){
            ans="";
            ans=ans+x.first;
            maxcount=x.second;
        }
    }
    cout<<ans<<endl;


}