#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    long long x=6;
    cin>>n;
    cout<<(max(x,n+1)/2)*5<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}