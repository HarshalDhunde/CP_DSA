#include<bits/stdc++.h>
#define ll   long long
using namespace std;

int main(){
    int t;
    cin>>t;
   while(t--){
        int n;
        cin>>n;
        ll mod = n % 2020;
        ll div = n / 2020;

        if( mod <= div){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}