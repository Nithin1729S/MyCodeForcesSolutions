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

    string s="codeforces";
    int T;
    cin>>T;
    while(T--)
    {
        int res=0;
        char c;
        cin>>c;
        for(auto i:s)
        {
            if(i==c)
            {
                res=1;
            }
        }
        if(res) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

