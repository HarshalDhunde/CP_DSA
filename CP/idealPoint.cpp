#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int l=0,r=0,a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a==k){
            l=1;
        }
        if(b==k){
            r=1;
        }

    }
    if(l==1 && r==1){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}