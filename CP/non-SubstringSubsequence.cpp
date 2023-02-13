#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
        while(t--){
        int n,q,l,r;
        string s;
        cin>>n>>q>>s;
        while(q--){
            bool ok = false;
            cin>>l>>r;
            l--,r--;
            for(int i=0; i<l; i++){
                if(s[i] == s[l])
                    ok = true;
            }
            for(int i=r+1; i<n; i++){
                if(s[i] == s[r])
                    ok = true;
            }
            if(ok){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }

        }
    }
}