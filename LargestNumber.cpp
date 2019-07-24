#include<bits/stdc++.h>
#define ll long long  
using namespace std;
/*
3, 30, 34, 5, 9
9543330
*/
int main() 
{
    ll n,i,j,k;
    cin>>n;
    ll a[n];
    string s;
    string temp=" ";
    for(i=0;i<n;i++)
    {
        cin>>s;
        temp+=s;
    }
    sort(temp.begin(),temp.end());
    reverse(temp.begin(),temp.end());
    cout<<temp<<endl;
}