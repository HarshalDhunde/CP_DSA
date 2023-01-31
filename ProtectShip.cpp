#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    char** mat=new char*[r];
    for(int i=0;i<r;i++){
        mat[i]=new char[c];
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
    bool possible=true;
    for(int i=0;i<r;i++){

        for(int j=0;j<c;j++){
            if(mat[i][j]=='W'){
                if(i-1>=0 && mat[i-1][j]=='S'){
                    possible=false;
                }
                else if(i-1>=0 && mat[i-1][j]!='W'){
                    mat[i-1][j]='D';
                }
                if(i+1<r && mat[i+1][j]=='S'){
                    possible=false;
                }
                else if(i+1<r && mat[i+1][j]!='W'){
                    mat[i+1][j]='D';
                }
                if(j-1>=0 && mat[i][j-1]=='S'){
                    possible=false;
                }
                else if(j-1>=0 && mat[i][j-1]!='W'){
                    mat[i][j-1]='D';
                }
                if(j+1<c && mat[i][j+1]=='S'){
                    possible=false;
                }
                else if(j+1<c && mat[i][j+1]!='W'){
                    mat[i][j+1]='D';
                }

            }
        }
        
        
    }
    if(possible){
            cout<<"YES"<<endl;
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    cout<<mat[i][j];
                }
                cout<<endl;
            }
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}