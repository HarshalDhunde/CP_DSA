#include <iostream>
#include<unordered_map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    unordered_map<char,int> um;
	    cin>>n>>m;
	    string a,b;
	    cin>>a>>b;
	    for(int i=0;i<n;i++){
	        um[a[i]]++;
	    }
	    for(int i=0;i<m;i++){
	        um[b[i]]++;
	    }
	    int countOdd=0;
	    for(auto x:um){
	        if(x.second%2!=0)
	            countOdd++;
	    }
	    if(countOdd>1)
	        cout<<"NO"<<endl;
	    else
	        cout<<"YES"<<endl;
	    
	    
	}
	return 0;
}
