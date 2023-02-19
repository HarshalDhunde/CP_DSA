#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,arr[12],sum=0;
    cin>>k;
    for(int i=0;i<12;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum<k){
        cout<<-1<<endl;
    }
    else{
        sort(arr,arr+12,greater<int>());
        int i=0;
        sum=0;
        while(sum<k){
            sum+=arr[i];
            i++;
        }
        cout<<i<<endl;
    }
   

}