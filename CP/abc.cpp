#include <iostream>
using namespace std;
void ans(){
    int n,x;
    string s="";
	cin>>n>>x;
	if(x<0){
	    cout<<-1<<endl;
	    return;
	}
	else if(n+1==x){
	    for(int i=0;i<n;i++){
	        s='+'+s;
	    }
	   cout<<s<<endl;
	   return;
	}
    if(x<=(n+1)  and (1-n)<=x){
        if(x>0){
            int plus=x-1;
            int multiply=n-plus;
            while(plus--){
                cout<<"+";
            } 
            while(multiply--){
                cout<<"*";
            }    
            cout<<endl;
            return;
        }
        
        if(x==0){
            int multiply=n-1;
            while(multiply--){
                cout<<"*";
            } 
            cout<<"-"<<endl;
            return;
        }

        if(x<0){
            int minus=abs(x)+1;
            int multiply=n-minus;
            while(minus--){
                cout<<"-";
            } 
            while(multiply--){
                cout<<"*";
            } 
            cout<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;
	
}


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ans();
	}
	return 0;
}
