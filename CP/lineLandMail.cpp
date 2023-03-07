#include<iostream>
using namespace std;

int main(){
    int n,mini=0,maxi=0;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(i==0){
            mini=abs(arr[i]-arr[i+1]);
            maxi=abs(arr[i]-arr[n-1]);
        }
        else if(i==n-1){
            mini=abs(arr[n-1]-arr[n-2]);
            maxi=abs(arr[n-1]-arr[0]);
        }
        else{
            mini=min(abs(arr[i]-arr[i+1]),abs(arr[i]-arr[i-1]));
            maxi=max(abs(arr[i]-arr[n-1]),abs(arr[i]-arr[0]));
        }
        cout<<mini<<" "<<maxi<<endl;
    }
}