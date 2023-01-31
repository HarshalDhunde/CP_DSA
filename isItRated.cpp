#include<bits/stdc++.h>
using namespace std;
int rated(int** arr,int n){
    int israted=0;
    for(int i=0;i<n;i++){
            if(arr[i][0]!=arr[i][1]){
                return 1;
            }
    }
    for(int i=0;i<n-1;i++){
        if(!(arr[i][0]>=arr[i+1][0])){
            return -1;
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[2];
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    int israted=rated(arr,n);
    if(israted==1){
        cout<<"rated"<<endl;
    }
    else if(israted==0){
        cout<<"maybe"<<endl;
    }
    else{
        cout<<"unrated"<<endl;
    }

}