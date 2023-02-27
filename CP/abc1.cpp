#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        int size1=word.size();
        long long n=0;
        vector<int> divi(size1);
        for(int i=0;i<size1;i++){
            n=(n*10+(word[i]-'0'))%m;
            if(n==0){
                divi[i]=1;
            }
            else{
                divi[i]=0;
            }
           
        }
        return divi;
    }
};
int main(){
    Solution s;
    vector<int> ans=s.divisibilityArray("998244353",9);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}