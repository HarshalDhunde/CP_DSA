#include<bits/stdc++.h>
using namespace std;

pair<int,int> mini(int* arr,bool* visited,int n){
    int maxval=INT_MIN,index=-1;
    pair<int,int> p;
    for(int i=0;i<n;i++){
        if(maxval<arr[i] && visited[i]==false){
            maxval=arr[i];
            index=i;
        }
    }
    if(index!=-1)
        visited[index]=true;
    p.first=index;
    p.second=maxval;
    return p;
}
int main(){
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool* visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    
    int cal=0,count=0;
    vector<int> v;
    while(count!=n){
        pair<int,int> a=mini(arr,visited,n);
        //cout<<"a:"<<a.second<<endl;
        cal+=count*a.second+1;
        count++;
        v.push_back(a.first+1);
    }
    cout<<cal<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}