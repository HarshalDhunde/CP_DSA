#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    bool magic=1;
    for(int i=0;i<n.size();){
        if(n.substr(i,3)=="144"){
            i+=3;
        }
        else if(n.substr(i,2)=="14"){
            i+=2;
        }
        else if(n.substr(i,1)=="1"){
            i+=1;
        }
        else{
            magic=0;
            break;
        }
    }
    if(magic){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}