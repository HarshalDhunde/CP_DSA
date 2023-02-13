#include<bits/stdc++.h>
using namespace std;
void count(){
    int r_even=0,r_odd=0,b_even=0,b_odd=0;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(i%2==0){
            if((s[i]-'0')%2==0){
                r_even++;
            }
            else{
                r_odd++;
            }
        }
        else{
            if((s[i]-'0')%2==0){
                b_even++;
            }
            else{
                b_odd++;
            }
        }
    }
    if(n%2==0){
        if(b_even>0){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    else{
         if(r_odd>0){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        count();
    } 
    return 0;
}