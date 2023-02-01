#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int count=n;
    int new1=0;
    while(n>=m){
        new1=new1+(n/m);
       // n=n+(n%m);
        int x=(n/m);
        n=x+(n%m);
        //out<<"h";
    }
    cout<<count+new1<<endl;

}