#include<bits/stdc++.h>
#define ll long long  
using namespace std;
ll k;
ll c[26];
string s;
ll isGood()
{
    ll count=0;
    for(int i=0;i<26;i++)
    {   
        //cout<<c[i]<<" ";
        if(c[i]>0)
        {
            count++;
        }
    }
    //cout<<endl;
    return (count>k?1:0);
}

int main() 
{
    ll n,i,j;
    cin>>s;
    cin>>k;
    ll start=0;
    ll end=0;
    c[s[0]-97]++;
    ll mxs=0;
    ll mx=1;
    for(i=1;i<s.length();i++)
    {
        c[s[i]-97]++;
        end++;
        while(isGood())
        {
            c[s[start]-97]--;
            start++;
        }
        if(end-start+1 >mx)
        {
            mx=end-start+1;
            mxs=start;
        }
    }
    cout<<s.substr(mxs,mx)<<endl;

}
