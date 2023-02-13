#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long r=abs(a-b)+abs(a-c)+abs(b-c);
        if(r<=4){
            cout<<0<<endl;
        }
        else{
            cout<<r-4<<endl;
        }
    }
}