#include<bits/stdc++.h>
#define ll   long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2==1 || n<4)cout<<-1<<endl;
        else
        {
            ll mn,mx;
            int ans=0;
            mn=n/6;
            ll ob=n%6;
            if(ob!=0)mn++;
            mx=n/4;
            cout<<mn<<" "<<mx<<endl;
        }
    }
}
 