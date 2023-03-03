#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6,arr[]={1,2,1,1,1,3,3,3,3,4};
    int l=0,r=1,count=1,max=-1;
    while(r<n){
        if(arr[l]==arr[r]){
            count++;
            r++;
            if(max<count){
                max=count;
            }
        }
        else{
            count=1;
            l=r;
            r++;
        }
    }
    cout<<max<<endl;

}