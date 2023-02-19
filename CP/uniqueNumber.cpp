#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n<10){
        cout<<n<<endl;
    }
    else{
        string s="";
        int r=0;
        for(int i=9;i>=0;i--){
            n-=i;
            if(n>=0){
                s=to_string(i)+s;
            }
            else if(n<9)
            else{
                break;
            }
            
        }   
    }
}
int main(){
    int t;
    while(t--){
        solve();
    }
    return 0;
}