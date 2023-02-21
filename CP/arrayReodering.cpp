#include<bits/stdc++.h>
using namespace std;

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
        int i=0,j=n-1;
        while(i<j){
            if(arr[i]%2!=0 && arr[j]%2==0){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                i++;
                j--;
            }
            if(arr[i]%2==0)
                i++;
            if(arr[j]%2!=0)
                j--;    
        }
        // for(int i=0;i<n;i++){
        //     cout<<arr[i]<<" ";
        // }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(arr[i],2*arr[j])>1)
                    count++;
            }
        }
        cout<<count<<endl;
    }
}