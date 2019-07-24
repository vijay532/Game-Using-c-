#include<bits/stdc++.h>
#define ll long long  
using namespace std;
int main() 
{
    string s;
    getline(cin,s);  //input whatever string you want 
    istringstream s1(s);
    vector<string>v;
    string word;
    int i=0;
    int l=0;
    while(getline(s1,word,' '))
    {
        v.push_back(word);  
        l=l>word.size()?l:word.size();
        i++; 
    }
    vector<char>ch;
    ll q=0;
    for(int m=0;m<i;m++)
    {
        string w;
        w=v[m];
        //cout<<w<<endl;
        for(int j=0;j<w.size();j++)
        {
            ch.push_back(w[j]);
        }
        q++;
    }
    /*for(int p=0;p<ch.size();p++)
    {
        cout<<ch[p]<<" ";
    }*/
    //cout<<i<<" "<<l<<endl;
    ll r=i+2;
    ll c=l+2;
    char a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            a[i][j]=' ';
        }
    }
    for(int m=0;m<c;m++)
    {
        a[0][m]='*';
    }
    for(int j=1;j<r;j++)
    {
        a[j][c-1]='*';
    }
    for(int j=c-1;j>=0;j--)
    {
        a[r-1][j]='*';
    }
    for(int j=r-1;j>0;j--)
    {
        a[j][0]='*';
    }
    ll p=0;
    ll k=0;
    for(int m=1;m<=i;m++)
    {
        string x=v[p];
        ll t=x.size();
        for(int j=1;j<=t;j++)
        {
            a[m][j]=ch[k];
            k++;
        }
        p++;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }
}

/*
sachin ramesh tendulkar 
* * * * * * * * * * * 
* s a c h i n       * 
* r a m e s h       * 
* t e n d u l k a r * 
* * * * * * * * * * * 

*/