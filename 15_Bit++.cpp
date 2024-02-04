#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif

    std::ios::sync_with_stdio(false);

    int n;
    cin>>n;
    
    int X=0;
    while(n--)
    {
        string str;
        cin>>str;
        if(str[1]=='+') ++X;
        else --X;
        

    }
    cout<<X<<endl;
}

