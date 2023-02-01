#include<bits/stdc++.h>
using namespace std;
void ans(){
    int n;
    cin>>n;
    for(int i=0;i<144;i++){
        for(int j=0;j<201;j++){
            if( (n-(5*j+7*i))>=0 && (n-(5*j+7*i))%3==0){
                cout<<(n-(5*j+7*i))/3<<" "<<j<<" "<<i<<endl;
                return;
            }
        }
    }
    cout<<-1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ans();
    }
    return 0;
}