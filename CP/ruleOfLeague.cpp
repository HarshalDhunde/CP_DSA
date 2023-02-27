#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    if(x>0 && y>0){
        cout<<-1<<endl;
        return;
    }
    else if(x==0 && y==0){
        cout<<-1<<endl;
        return;
    }
    else if(x<0 || y<0){
        cout<<-1<<endl;
        return;
    }
    if(x==0){
        swap(x,y);
    }
    if((n-1)%x!=0){
        cout<<-1<<endl;
        return;
    }
    else{
        int man=1,i=1;
        while(man<=n){
            man++;
            i=1;
            while(i!=x+1){
                cout<<man<<" ";
                i++;
            }
            man=man+x;
            // cout<<man<<endl;
            
        }
        return;
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}