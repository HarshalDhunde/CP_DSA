#include<bits/stdc++.h>
using namespace std;
int maximun(int* arr,int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(maxi<arr[i]){
            maxi=arr[i];
        }
    }
    return maxi;
}

int minimun(int* arr,int n){
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        if(mini>arr[i]){
            mini=arr[i];
        }
    }
    return mini;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int* arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int maxi=maximun(arr,n);
        int mini=minimun(arr,n);
        //cout<<"max:"<<maxi<<"min:"<<mini<<endl;
        int diff=maxi-mini;
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(i==j)
                    continue;
                int d=arr[i]-arr[j];
                d=abs(d);
                if(d==diff){
                    //cout<<arr[i]<<" "<<arr[j]<<endl;
                    count=count+2;
                }
                    
            }
        }
        cout<<count<<endl;

    }


}            