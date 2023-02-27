#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0,val=-1;
    for(int i=0;i<n-1;i++){
        if(val!=arr[i] && arr[i]==arr[i+1]){
            count++;
            val=arr[i];
        }
    }
    cout<<count<<endl;
}