#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int rem=n%k;
        int give=k/2;
       // n=rem+give;
       if(rem>=give){
            cout<<(n-(n%k))+give<<endl;
       }
       else{
            cout<<(n-(n%k))+rem<<endl;
       }
        
    }
}