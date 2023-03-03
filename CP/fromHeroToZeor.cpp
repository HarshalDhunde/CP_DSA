#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k;
    cin>>n>>k;
    long long count=0;
    while(n!=0){
        if(n%k==0){
            n=n/k;
            count++;
        }
        else{
            long long r=n%k;
            n=n-r;
            count=count+r;
        }
    }
    cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while ((t--))
    {
        /* code */
        solve();
    }
    return 0;
    
}