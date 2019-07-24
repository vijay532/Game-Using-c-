
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long 
using namespace std;
int main() 
{
    ll n,i,j;
    //cin>>j;
    do
    {
        cout<<"How many Rounds will be there ?"<<endl;
        cin>>n;
        cout<<"Rock=r or R  Paper=p or P Scisor=s or S........"<<endl;
        ll c1=0,c2=0;
        while(n--)
        {
            string p1,p2;
            cin>>p1>>p2;
            i=0;
            if(p1[i]=='R' && p2[i]=='P' || p1[i]=='r' && p2[i]=='p')
            {
                c1++;
            }   
            else if(p1[i]=='P' && p2[i]=='R' || p1[i]=='p' && p2[i]=='r')
            {
                c2++;
            }
            else if(p1[i]=='P' && p2[i]=='S' || p1[i]=='p' && p2[i]=='s')
            {
                c2++;
            }
            else if(p1[i]=='S' && p2[i]=='P' || p1[i]=='s' && p2[i]=='P')
            {
                c1++;
            }
            else if(p1[i]=='R' && p2[i]=='S' || p1[i]=='r' && p2[i]=='s')
            {
                c1++;
            }
            else if(p1[i]=='S' && p2[i]=='R' || p1[i]=='s' && p2[i]=='r')
            {
                c2++;
            }
        }
        cout<<((c1>=c2)?(c1==c2)?"DRAW":("Player 1 is won !!!!"):"Player 2 is won !!!!")<<endl;
        cout<<"Do you want more games to play, click 1 for YES and Click 0 for NO??"<<endl;
        cin>>j;
    }while(j);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
