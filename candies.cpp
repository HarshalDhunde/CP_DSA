#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,k;
        cin>>n;
       for(int i=2;i<32;i++){
            int d=pow(2,i)-1;
            if(n%d==0){
                x=n/d;
                break;
            }
       }
        cout<<x<<endl;
    }
    return 0;
}