#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
#define fr first
#define sc second
#define INF LLONG_MAX
#define int long long
#define endl '\n'
#define pb push_back
#define all(x) x.begin(),x.end()
#define clr(x) memset(x,0,sizeof(x))
#define sortUni(v) sort(all(v)), v.erase(unique(all(v)), v.end())
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f0(i,n)  for(int i=0;i<(int)n;i++)
#define f1(i,n)  for(int i=1;i<=(int)n;i++)

int32_t main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
    fast_io;

    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    int ans=0;
    int n=s1.length();
    f0(i,n)
    {   
        if(islower(s1[i])) s1[i]-=32;
        if(islower(s2[i])) s2[i]-=32;
        if(s1[i]==s2[i]) continue;
        else
        {
            if(s1[i]>s2[i])
            {
                ans=1;
                break;
            }
            else
            {
                ans=-1;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}

