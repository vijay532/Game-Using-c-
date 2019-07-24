/* element which are not repeated using one loop*/
#include<bits/stdc++.h>
#define ll long long  
using namespace std;
int main() 
{
    ll n,i,j,m,k;
    cin>>n;
    ll a[n];
    map<ll,ll>mp;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto i:mp)
    {
        if(i.second==1)
        {
            cout<<i.first<<endl;
        }
    }
    return 0;
}