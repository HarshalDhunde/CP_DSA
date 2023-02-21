#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n,m,flag=0;
        cin>>x>>n>>m;
        int z=x-m*10;
        if(z<=0){
            cout<<"YES"<<endl;
        }
        else{
            while(n--){
                x=(x/2)+10;
            }
            while(m--){
                x=x-10;
                if(x<=0){
                    flag=1;
                    break;
                }
            

            }
            //cout<<x<<endl;
            if(flag==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl; 
        }
        
    }
}